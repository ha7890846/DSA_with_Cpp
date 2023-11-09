#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[],int size){
    cout<<"\t";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
void sortColors(int arr[],int size) {
    int s=0,l=0;
    int e=size-1;
    while(s<=e){
        if(arr[s]==0){
            swap(arr[s],arr[l]);
            s++;
            l++;
        }
        else if(arr[s]==1){
            s++;
        }
        else{
            swap(arr[s],arr[e]);
            e--;
        }
    }
    printArray(arr,size);
}

int main(){
    int arr[]={1,2,0,1,2,0,2};
    int brr[]={1,2,2,2,0,2,0};
    int crr[]={2,0};
    cout<<"Test case I:";
    printArray(arr,7);
    cout<<"Test case II:";
    printArray(brr,7);
    cout<<"Test case III:";
    printArray(crr,2);
    cout<<"After Sorting the output"<<endl;
    cout<<"The Arr:";
    sortColors(arr,7);
    cout<<"The Brr:";
    sortColors(brr,7);
    cout<<"The Brr:";
    sortColors(crr,2);



    return 0;
}