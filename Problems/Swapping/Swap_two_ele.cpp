#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    cout<<"Before x and y: "<<x<<", "<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
    cout<<"After swapping x and y: "<<x<<", "<<y<<endl;
    return 0;
}