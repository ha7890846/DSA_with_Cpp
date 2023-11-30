#include<iostream>
using namespace std;
int findEle(int arr[],int size,int target){
    int s,e;
    s=0;e=size-1;
    //Extreme best case
    if(target== arr[s]){
        return s;
    }else if(target==arr[e]){
        return e;
    }
    while(s<=e){
        int mid= s+(e-s)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid-1]==target){
            return mid-1;
        }
        if(target>arr[mid]){
            //right search...
            s=mid+2;
            //for some optimization we increse the num of s,bcz we already checked mid+1;
        }else{
            //left search...
            e=mid-2;
            //for some optimization we increse the num of s,bcz we already checked mid-1;            
        }
    }
    return -1;
}




int main(){
    int arr[]={20,10,40,30,60,80,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"your Array: ";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    char result;
    do{
        int key;
        cout<<"Enter the value to find:";
        cin>>key;
        int ans = findEle(arr,size,key);
        cout<<"\nthe Index is: "<<ans<<endl;
        cout<<"Do you want to find another number press 'y':";
        cin>>result;
    }while(result=='y');




    return 0;
}