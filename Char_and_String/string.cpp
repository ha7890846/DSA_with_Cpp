#include<iostream>
using namespace std;
void printString(char str[],int size){
    for (int i=0;i<size;i++){
        cout<<str[i];
    }
    cout<<endl;
 }
int main(){

    // here '\0' is a termination key,,,,,,,,
    char arr[]={'a','b', 'c','d','e','f','\0','s','r'};
    int length =sizeof(arr)/sizeof(arr[0]);
    cout<<"the length of arr is: "<<length<<endl<<"The char word: ";
    printString(arr,length);
    /// Multiple char into time ...
    char brr[100];
    cout<<"Enter your name: ";
    cin>>brr;
    cout<<"my name is:"<<brr<<endl;
    int size_brr=0;
    int i=0;
    while(brr[i] !='\0'){
        size_brr++;
        i++;
    }
    cout<<"the size of brr is:"<<size_brr<<endl;
    for(i=0;i<size_brr;i++){
        cout<<"The index value ["<<i<<"] and the char is at index : "<<brr[i]<< endl;
    }
    // for escalate, termination char use gelint function....
    char student[100];
    cout<<"Enter the student name(use space or tab is allowed ): ";
    cin.getline(student,50);
    cout<<"the name you have entered is : "<<student<<endl;
////// string predefined STl   .........
    string name;
    getline(cin,name);
    cout<<"Your name is : "<<name <<endl;
    return 0;  
}