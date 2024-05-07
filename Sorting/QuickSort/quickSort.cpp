#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr, int low, int high){
    cout<<"\n\t*** The partitioning start from here. ***"<<endl;
    // let's assume that first element is pivot,
    int pivotIndex = low;
    int pivotElement = arr[pivotIndex];
    // choose correct position for pivotElement/.
    int count = 0;
    for(int i = low+1;i<= high;i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // swap element to change position of pivot.
    int correct_ind = low + count;
    swap(arr[pivotIndex],arr[correct_ind]);
    // now pivotIndex reaches to correct ind.
    pivotIndex = correct_ind;
    cout<<"The Pivot element is: "<<pivotElement<<endl;
    // sort to left side: for lower element than pivot
    // sort to right side : for higher ele than pivot
    int s = low;
    int e = high;
    while(s < pivotIndex && e > pivotIndex ){
        while(arr[s] <= pivotElement){
            s++;
        }
        while( arr[e] > pivotElement){
            e--;
        }
        if(s < pivotIndex && e > pivotIndex ){
            cout<<"Swapping occurs between: "<<arr[s]<<", "<<arr[e]<<endl;
            swap(arr[s++],arr[e--]);
        }
    }
    cout<<"After Partioning Array is: "<<endl;
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl;
    return pivotIndex;
}
void quickSort(vector<int>&arr,int start, int end){
    if(start >= end){
        return ;
    }
    //push one element in right position ..
    int pivot_index = partition(arr,start,end);
    // left sub- array recursive call
    cout<<"Calling the quickSort fn for left subarray upto pivot): "<<endl;
    quickSort(arr,start,pivot_index-1);
    // Right sub arr recursive call 
    cout<<"Calling the quickSort fn for right subarray from pivot): "<<endl;
    quickSort(arr,pivot_index+1,end);
}
int main(){
    vector<int>arr{1,12,91,4,3,53,65,75,34,67,34,33,12,23};
    //vector<int>arr{8,5,4,7,2,75,23,43,34,21,7,9,11,19};
    int s =0;
    int e = arr.size()-1;
    cout<<"\nThe Original array is: "<<endl;
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl<<endl;
    quickSort(arr,s,e);
    cout<<"The array after sorting Techniques: "<<endl;
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl;
    return 0;
}