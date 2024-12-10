#include<iostream>
using namespace std;
int main(){
    int target, value = 1;
    cout<<"Enter the Value to print: ";
    cin>>target;
    while(target--){
        for(int i=1;i <= value;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        value++;
    }
    return 0;
}