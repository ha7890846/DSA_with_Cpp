#include<iostream>
#include<vector>
using namespace std;
//time complexity of Binary Search:O(log n);
int binarySearch(vector<int>vect,int target){
    int s,e;
    // Here S & E is point to starting index and LastEle Index in-order....
    s=0;e=vect.size();
    while(s<=e){
        // Taken mid as ceiling value...
        int mid=s+(e-s)/2;
    //  To avoid below problem, we use mid =s+(e-s)/2 instead of mid=s+e/2;
    //if value of start or end or both is INT_MAX, it will cause integer overflow.
        if(vect[mid]==target){
            return  mid;
        }
        if(vect[mid]>target){
            // Search in left sub array...
            e=mid-1;
        }
        if(vect[mid]<target){
            //go to right sub array...
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of Array:\t";
    cin>>n;
    vector<int>arr(n);
    cout<<"plzz Enter the element in monotonic order"<<endl;
        // Monotonic means-- in order of increasing or decreasing;
    for(int i=0;i<arr.size();i++){
        cout<<"Enter the Element for array["<<i<<"]th index:";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Target value to find:";
    cin>>key;
    int index=binarySearch(arr,key);
    if(index==-1){
        cout<<"Target is not found.";
    }else{
        cout<<"Target is found,its index:"<<index;
    }



    return 0;
}