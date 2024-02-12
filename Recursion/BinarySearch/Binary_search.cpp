#include<iostream>
#include<vector>
#include<string>
using namespace std;
int binarySearch(vector<int>& array,int& target, int start, int end){
    if(start > end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(array[mid]== target){
        return mid;
    }
    if(array[mid] < target){
        //right search..
        return binarySearch(array,target,mid+1,end);
    }else{
        //left search
       return binarySearch(array,target,start,mid-1);
    }
    
}
int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int target = 70;
    int start=0;
    int end = arr.size()-1;
    cout<<"The target is found at: "<<binarySearch(arr,target,start,end)<<"th index.";

    return 0;
}