#include<iostream>
using namespace std;
int bruteForce(int arr[], int n){
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
             return false;
         }
     }
    }
    return true;
}
bool optimized(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int arr2[] = {50,23,200,32,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Array1 is Sorted (Brute Force): "<<bruteForce(arr,n)<<endl;
    cout<<"The Array1 is Sorted (Optimized): "<<optimized(arr,n)<<endl;
    cout<<"The Array2 is Sorted (Brute Force): "<<bruteForce(arr2,n)<<endl;
    cout<<"The Array2 is Sorted (Optimized): "<<optimized(arr2,n)<<endl;
    return 0;
}