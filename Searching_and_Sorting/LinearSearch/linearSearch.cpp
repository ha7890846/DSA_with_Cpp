#include<iostream>
#include<vector>
using namespace std;

//   Time complexity of LinearSearch: O(N);
int linearSearch(vector<int>vect,int target){
    //linear Search, Travese every element and compare to target..
    for(int i=0;i<vect.size();i++){
        if(vect[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element:arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"Your Array; ";
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<"\nEnter the key to find: ";
    cin>>key;
    int ans=linearSearch(arr,key);
    if(ans==-1){
        cout<<"KEY IS NOT FOUND.";
    }else{
        cout<<"KEY is found at "<<ans<<"th index.";
    }
    return 0;
}