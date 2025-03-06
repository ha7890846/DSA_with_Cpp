#include<iostream>
#include<set>
using namespace std;
// BruteForce Appraoch
int removeDuplicate(int arr[],int n){
    set<int>sets;
    for(int i=0;i<n;i++){
        sets.insert(arr[i]);
    }
    // copy set to array...
    int j =0;
    for(int v:sets){
        arr[j++] = v;
    }
    return sets.size();
}

// Optimal Appraoch
int removeDuplicateOptimal(int nums[],int n){
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
int main(){
    int arr[] = {1,1,1,2,2,2,3,4,4,5};
    int arr2[] = {0,0,1,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"The size of array after removing duplicate(BruteForce): "<<removeDuplicate(arr,n)<<endl;
    cout<<"Your Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The size of array after removing duplicate(Optimal): "<<removeDuplicateOptimal(arr2,n2)<<endl;
    cout<<"Your Array: ";
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}