#include<iostream>
#include<algorithm>
using namespace std;
int secLarge(int arr[], int n){
    sort(arr,arr+n);
    return arr[n-2];
}
// Optimized Solution
int secLarge2(int arr[], int n){
    int largest = arr[0];
    int secLargest = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secLargest && arr[i]!=largest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}
int main(){
    int arr[] = {1,23,21,53,57,34,76,22,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The second largest element is (Sorting): "<<secLarge(arr,size) <<endl;
    cout<<"The second largest element is (Optimized): "<<secLarge2(arr,size) <<endl;
    return 0;
}


