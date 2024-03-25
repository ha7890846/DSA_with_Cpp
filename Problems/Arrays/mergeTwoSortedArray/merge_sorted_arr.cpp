#include<iostream>
#include<vector>
using namespace std;
void naive(vector<int>&arr,vector<int>&brr,vector<int>&output){
    int m = arr.size();
    int n = brr.size();
    // creation of two array size m and n...
    int* left = new int[m];
    int* right = new int[n];
    // copy arr and brr to new left and right array..
    for(int i = 0;i<arr.size();i++){
        left[i] = arr[i];
    }
    for(int i = 0;i<brr.size();i++){
        right[i] = brr[i];
    }

    int i = 0;
    int j = 0;
    while(i<m && j<n){
                
    }
    
}
void optimal(vector<int>&arr,vector<int>&brr,vector<int>&output){

}
int main(){
    vector<int>arr{22,23,25,34,35,50};
    vector<int>brr{12,13,22,28,50,50,57};
    vector<int>output;
    int choice;
    cout<<"\t\t\t***Merge of two sorted Array.****";
    cout<<"\n1. Naive Solution \n2.Optimal Solution\nEnter the choice of Implementation:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        naive(arr,brr,output);
        break;
    case 2:
        optimal(arr,brr,output);
        break;
    default:
        cout<<"Enter a valid Choice."<<endl;
        break;
    }
    return 9;
}