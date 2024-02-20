#include<iostream>
using namespace std;
void printChar(char* str){
    // base case..
    if(*str == '\0'){
        return;
    }
    cout<<*str;
    printChar(str+1);
    return; 
}
int main(){
    char arr[] = {'a','b','c','d','e','\0'};
    char* ptr = arr;
    cout<<"The string is: ";
    printChar(ptr);
    return 0;
}