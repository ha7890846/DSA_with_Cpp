#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&arr){
    for(int i= 1;i<arr.size();i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        cout<<"Array after "<<i<<"st loop:\t";
        for(auto v:arr){
            cout<<v<<", ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int>arr{33,1,25,45,6,45,56,53,35,3,56};
    cout<<"\t\t\t*****Insertion Sort*******"<<endl;
    cout<<"\nThe Original Array is:\t";
    for(auto v: arr){
        cout<<v<<", ";
    }
    cout<<endl<<endl;
    insertionSort(arr);
    cout<<"The Sorted Array is:\t";
    for(auto v: arr){
        cout<<v<<", ";
    }
    cout<<endl;
    return 0;
}