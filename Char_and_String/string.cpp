#include<iostream>
#include<string>    // for string function.
using namespace std;
int main(){

// string predefined STl   .........
    string s1 = "Hello coder";
    cout<<"String S1: "<<s1<<endl;
    string name;
    cout<<"Enter Your name: ";
    getline(cin,name);
    cout<<"Your name is : "<<name <<endl;
    return 0;  
}