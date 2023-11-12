#include<iostream>
#include<vector>
using namespace std;

int peakElement(int a[],int size){
    int s,e;
    s=0;e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(a[mid+1]>a[mid]){
            // Goto right subarray....
            s=mid+1;
        }
        else{
            //Goto Left Search///
            e=mid;
        }
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the size of arrya:";
    cin>>n;
    int arr[n];
    cout<<"\t*****************Enter The Array in Mountain for first increasing" 
    <<"order than reverse.***********"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element for arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Your Array:";
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl;
    cout<<"The Peak Element in Array: "<<arr[peakElement(arr,n)]<<endl;
    return 0;
}