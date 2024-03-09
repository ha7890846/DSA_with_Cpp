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
int main(){
    vector<int>arr{5,4};
    int target = 19;
    cout<<"Minimum num of Element :"<<countMinEle(arr,target)<<endl;
    // cout<<"Total no of ways to reach: "<<totalWays(arr,target)<<endl;
    return 0;
}