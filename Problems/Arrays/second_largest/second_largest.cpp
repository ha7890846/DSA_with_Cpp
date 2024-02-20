#include<iostream>
using namespace std;
int secLarge(int arr[], int n){
    int index = -1;
    int largest_Index = 0;
    for(int i =0;i<n;i++){
        if(arr[i] >arr[largest_Index] ){
            index = largest_Index;
            largest_Index = i;
        }
        else if(arr[i] != arr[largest_Index]){
            if(index == -1 || arr[i]>arr[index]){
                index = i;
            }
        }
    }
    return index;
}
int main(){
    int arr[] = {1,23,21,53,57,34,76,22,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = secLarge(arr,size);
    cout<<"The second largest element is: "<<arr[result] <<" at index: "<<result<<endl;
    return 0;
}


