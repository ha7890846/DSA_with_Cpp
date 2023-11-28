#include<iostream>
using namespace std;
int PivotIndex(int arr[],int size)
{
       int s,e;
       s=0;e=size-1;
       while(s<e)
       {
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[mid]<arr[s]){
            e=mid-1;
        }else{
            
            s=mid+1;
        }
       }
    return -1;
}
int SearchInRotated(int array[],int size,int target){
    int pivot = PivotIndex(array,size);
    int s=0;
    int e=size-1;
    cout<<"pivot Index:"<<pivot<<" and pivot is: "<<array[pivot]<<endl;
    //extreme best case while ...
    if(target==array[s]){
        return s;
    }else if(target==array[e]){
        return e;
    }
    //checking sort sub-array condition
    if(target<array[s]){
        s =pivot;
    } else if(target>array[s]){
        e=pivot;
    }
    if(target == array[pivot]){
        return pivot;
    }
    while(s<=e){
        int mid=s+(e-s)/2;
        if(array[mid]==target){
            return mid;
        }
        if(array[mid]<target){
            // right search
            e=mid+1;
        }else{
            //left search
            s=mid-1;
        }

    }
    return -1;
}
int main(){
    int arr[]={6,7,8,9,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Rotated sorted array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    int key;
    cout<<"Plzzz Enter the Key value:";
    cin>>key;
    int ans = SearchInRotated(arr,size,key);
    cout<<"The Index of target is: "<<ans<<endl;
    return 0;
}