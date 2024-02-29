#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
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
    vector<int>numbers{6,8,11,10,1,6,8,9,4,2,7,5,1};
    cout<<"\t\t\t****Selection Sort******"<<endl;
    // it is a unstable sorting algo 
    cout<<"The Original Array is: ";
    for(auto v:numbers){
        cout<<v<<", ";
    }
    cout<<endl;
    selectionSort(numbers);
    cout<<"\nThe Sorted Array is: ";
    for(auto v:numbers){
        cout<<v<<", ";
    }
    cout<<endl;
    return 0;
}