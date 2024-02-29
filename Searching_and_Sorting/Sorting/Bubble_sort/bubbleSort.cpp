#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr){
    // Bubble sort is a Stable Sorting algo...
    for(int i = 0;i<arr.size();i++){
        for(int j =0;j<arr.size()-i;j++){
            // size to be decrement from the last as the last element sorted 
            //after i th loop pass;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int>arr{3,24,31,1,37,7,5,43,53,1,79,64,45};    
    cout<<"\nThe Original Array is: ";
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<endl;
    bubbleSort(arr);
    cout<<"The Sorted Array is: ";
    for(auto v:arr){
        cout<<v<<", ";
    }
    cout<<"\n";
    return 0;
}