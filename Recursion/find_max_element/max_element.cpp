#include<iostream>
using namespace std;
int solve(int* arr,int size){
    static int ans  = 0;
    // base case.....
    if(size == 0){
        return -1;
    }
    if(ans < *arr){
        ans = *arr;
    }
    solve(arr+1,size-1);
    
   return ans ;
    
}
int main(){                                         
    int arr[] = {10,29,39,53,48,78};
    int size = 6;
    int* p = arr;
    cout<<"The max element is: "<<solve(p,size);
    return 0;
}