#include<iostream>
using namespace std;
void printArray(int arr[], int size,int index){
    if( index > size ){
        return ;
    }
    cout<<arr[index]<<", ";
    return printArray(arr,size,index+1);
}
int main(){

    int arr[] = {10,24,1,5,15,34,89};
    int arr_size = 7;
    int index = 0;
    printArray(arr,arr_size-1,index);
    return 0;
}