#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void naive(vector<int>&arr){
   vector<int>temp(arr.size());
    for(int i =0 ;i<arr.size();i++){
        int min_index = 0;
        for(int j = 1;j<arr.size();j++){
            if(arr[j] <arr[min_index]){
                min_index = j;
            }
        }
        temp[i] = arr[min_index];
        arr[min_index] = INT_MAX;
    }
    for(int i = 0;i<temp.size();i++){
        arr[i] = temp[i];
    }
}
void selectionSort(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int mini = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    vector<int>numbers{232,323,23,235,342,8,892,43,23,45,234,43,434,234,0,48910,20,234,1,2,3};
    cout<<"\t\t\t****Selection Sort******"<<endl;
    // it is a unstable sorting algo 
    cout<<"The Original Array is: ";
    for(auto v:numbers){
        cout<<v<<", ";
    }
    cout<<endl;
    //selectionSort(numbers);
    naive(numbers);
    cout<<"\nThe Sorted Array is: ";
    for(auto v:numbers){
        cout<<v<<", ";
    }
    cout<<endl;
    return 0;
}