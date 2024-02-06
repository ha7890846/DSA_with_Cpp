#include<iostream>
#include<string.h>
#include<limits>
using namespace std;
void printString(char str[],int size){
    for (int i=0;i<size;i++){
        cout<<str[i];
    }
    cout<<endl;
 }
int main(){
    char name[]={'a','b','c','\0'};
    char string[]="chalri";
    cout<<name<<endl;
    cout<<string<<endl;
    int count =0;
    int i=0;
    for(int i=0;i<5;i++){
        cout<<"index"<<i<<":"<<name[i]<<endl;
    }
    cout<<"coount"<<count<<endl;
    cout<<"The length of string is:"<<strlen(string)<<endl;
    cout<<"concatenation:"<<strcat(name,string)<<endl;
    cout<<"copy function retrieva: "<<strncpy(name,string,3);
    cout<<"compare: "<<strcmp(name,string)<<endl;
    char str1[]="here is the output";
    char str2[]="is";
    cout<<"find str:"<<strstr(str1,str2);
    // Some new thing to know..
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
    int j=0;
    while(brr[j] !='\0'){
        size_brr++;
        j++;
    }
    cout<<"the size of brr is:"<<size_brr<<endl;
    for(i=0;i<size_brr;i++){
        cout<<"The index value ["<<i<<"] and the char is at index : "<<brr[i]<< endl;
    }
    // for escalate, termination char use gelint function....
    char student[100];
    cout<<"Enter the student name(use space or tab is allowed ): ";
    // it will clear keyboard input buffer..... contains in <limits> header file
    // including the new line character also
    cin.ignore(numeric_limits<streamsize>::max(),'\n');    
    cin.getline(student,50);
    cout<<"the name you have entered is : "<<student<<endl;
    return 0;
}