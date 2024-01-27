#include<iostream>
#include<limits.h>
using namespace std;
bool checkPali(int n){
    if(n<10){
        return true;
    }
    int reverse=0;
    // It is necessary to make a temp var
    // bcz number is compared to the rev value..
    int tempNum = n;
    while(tempNum != 0){
        int temp = tempNum % 10;
        reverse = reverse*10 + temp;
        tempNum = tempNum/10;
    }
    return reverse==n;
}
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    cout<<checkPali(number);
    return 0;
}