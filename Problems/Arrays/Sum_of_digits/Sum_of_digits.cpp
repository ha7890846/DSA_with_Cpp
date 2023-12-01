#include<iostream>
using namespace std;
void summing(int num){
    cout<<"You have entered: "<<num<<endl;
    int sum=0;
    while(num!=0){
        sum += num % 10;
        num = num/10;
    }
    cout<<"The Sum of Digits is: "<<sum<<endl;
}
int main(){
    char repeat;
    do{
        int num;
        cout<<"Enter the number: ";
        cin>> num;
        summing(num);
    }while(repeat == 'y');
    return 0;
}