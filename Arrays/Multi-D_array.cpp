#include<iostream>
using namespace std;
int main(){
    //initialize 2d array...
    int row=3;
    int col=4;
    int arr1[row][col]={{0,1,2,0},{3,4,5,6},{7,8,9,0}};
    
    // Initialize with user input.. as run time...
    int m=4,n=3,element;
    int arr3[m][n];
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the Element for arr2["<<i<<"]["<<j<<"]: ";
            cin>>element;
            arr3[i][j]=element;
        }
    }
    //Printing Array3 ..
    cout<<"\nYour Array is:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    // initialize with for loop...
    int arr2[row][col];
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr2[i][j]=count;
            count++;
        }
    }
    // we represents 2d as matrix....
    // Traverse every element in array..
    cout<<"Let's Print arr1:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Here we Print second arr2:\n";
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}