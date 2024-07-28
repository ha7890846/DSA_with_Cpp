#include<iostream>
#include<stack>
using namespace std;
// This is not By Ref ...
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
}

int main(){
    stack<int>s;
    s.push(70); 
    s.push(15); 
    s.push(12); 
    s.push(21); 
    s.push(25); 
    s.push(13); 
    s.push(17); 
    s.push(18); 
    cout<<"Printing the Stack: ";
    printStack(s);
    return 0;
}