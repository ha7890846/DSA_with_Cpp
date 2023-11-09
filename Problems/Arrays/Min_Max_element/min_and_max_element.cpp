#include <iostream>
#include <climits>
using namespace std;

// Using Limits stl.....
void findMin(int arr[],int size){
    int mini=INT_MAX;
    if(size>1){
        for(int i=0;i<size;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
        cout<<"The min value element is: "<<mini<<endl;
    }
    else if(size==1){
        cout<<"There is only one element in Array is:"<<arr[0]<<endl;
    }
    else{
        cout<<"Element not available."<<endl;
    }
}
// Function to find max value..
void findMax(int arr[],int size){
    int maxi=INT_MIN;
    if(size>1){
        for(int i=0;i<size;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        cout<<"The max value element is: "<<maxi<<endl;

    }
    else if(size==1){
        cout<<"There is only one element in Array is:"<<arr[0]<<endl;
    }
    else{
        cout<<"Element not available."<<endl;
    }
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter the No of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for array[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\nLet's Print the built Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout << endl;
    // let's find out min and max element in array...
    //calling function...
    findMin(arr,n);
    findMax(arr,n);


    return 0;
}