#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int countMinEle(vector<int>& arr, int target){
    if( target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0;i<arr.size();i++){
        int ans = countMinEle(arr,target-arr[i]);
        if(ans != INT_MAX){
            mini = min(ans+1,mini);
        }
    }
    return mini;
}
int countMaxEle(vector<int>&arr, int target){
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MIN;
    }
    int maxi = INT_MIN;
    for(int i = 0;i<arr.size();i++){
        int ans = countMaxEle(arr,target-arr[i]);
        if(ans != INT_MIN){
            maxi = max(ans+1,maxi);
        }

    }
    return maxi;
}
int main(){
    vector<int>arr{2,4};
    int target = 19;
    int maxCount = countMaxEle(arr,target);
    int minCount = countMinEle(arr,target);
    cout<<"Minimum num of Element :";
    if(minCount != INT_MAX){
        cout<<minCount<<endl;
    }else{
        cout<<0<<endl;
    }
    cout<<"Max num of Element : ";
    if(maxCount != INT_MIN){
        cout<<maxCount<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}