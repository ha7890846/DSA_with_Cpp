#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"Enter the Value for print: ";
    cin>>target;
    for(int row = 1;row <= target; row++){
        for(int col = row;col <= target; col++){
            if(row ==1 || row ==col || col == target)
            {
                cout<<col<<" ";
                }else{
                    cout<<"  ";
                }
        }
        cout<<endl;
    }
    return 0;
}