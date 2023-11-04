/* Problem: Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void usingSort(int arr[],int size){
    //here ref add of arr:::(base add:arr and last ele add:arr+n);
    sort(arr,arr+size);
    cout<<"\nThe Duplicate using Sort(STL):\t";
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i+1];
            break;
        }
        
    }
    cout<<endl;
}
void mark_visit(int arr[],int size){
    int ans=-1;
    for(int i=0;i<size;i++){
     // Taking absolute value to avoid neg int.,
     int index=abs(arr[i]);
     // checking for visited mark;
     if(arr[index]<0){
        ans=index;
        break;
     }
     // visited mark..'
     arr[index] *= -1;
    }
    cout<<"The duplicate Using Mark_visiting::\t"<<ans<<endl;
}
//this method indexPostioning is vulnerable so avoid it.......
void IndexPositioning(int arr[],int size){
    while(arr[0] !=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    cout<<"\nThe Repetition element is::"<< arr[0] <<endl;
}
int main(){
    int n;
    cout<<"Enter the size of element:";
    cin>>n;
    int arr[n+1]={};
        //puts one element extra as per the problem state;
    for(int i=0;i<n+1;i++){
        cout<<"Enter the Element:\t";
        cin>>arr[i];
    }
    cout<<"The array You entered::";
    for(auto it:arr){
        cout<<it<<", ";
    }
    usingSort(arr,n+1);
    mark_visit(arr,n+1);
    // IndexPositioning(arr,n+1);
    return 0;
}

