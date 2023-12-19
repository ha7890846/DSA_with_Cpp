#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the num:";
    cin>>num;
    switch(num){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"tuesday";
        break;
        case 4:
        cout<<"Wed";
        break;
        case 5:
        cout<<"Thur";
        break;
        case 6:
        cout<<"Fri";
        break;
        case 7:
        cout<<"Sat";
        break;
        default:
        cout<<"wrong num";
        break;
        }
    return 0;
}