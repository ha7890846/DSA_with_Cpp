#include<iostream>
#include<vector>
using namespace std;
bool findEle(int vect[][3],int rows,int cols,int target){
    int s,e;
    int size=rows*cols-1;
    s=0;e=size;
    while(s<=e){
        int mid = s+(e-s)/2;
        int rowIndex=mid/cols;
        int colsIndex=mid%cols;
        int ele = vect[rowIndex][colsIndex];
        if(ele==target){
            cout<<"Found at "<<rowIndex<<"th Row and "<<colsIndex<<"th cols"<<endl;
            return true;
        }
        if(target>ele){
            //right search
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return false;
}

int main(){
    int arr[3][3]={
        {1,2,3},
        {3,4,5},
        {6,7,8},
    };
    int key;
    int rows=3;
    int cols=3;
    char input;
    do{
        cout<<"Enter the Value to find: ";
        cin>>key;
        bool elementResponse=findEle(arr,rows,cols,key);
        if(elementResponse){
            cout<<"The item is found."<<endl;
        }
        else{
            cout<<"Result not found."<<endl;
        }
        cout<<"Do you want to find other value type 'y': ";
        cin>>input;
    }while(input=='y');

    return 0;
}