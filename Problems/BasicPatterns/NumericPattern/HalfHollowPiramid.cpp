#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"Enter the Value to print: ";
    cin>>target;
    for(int row = 1;row<=target;row++){
        for(int col = 1;col<=row;col++){
            if(col == 1 || col == row ||row == target ){
                cout<<col<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}