#include<iostream>
#include<stack>
using namespace std;
void sortedStack(stack<int>&s, int &value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp;
    if(s.top()> value){
        temp = s.top();
        s.pop();
    }else{
        s.push(value);
        return;
    }
    sortedStack(s,value);
    s.push(temp);
    return;
}
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.push(35);
    s.push(45);
    s.push(55);
    cout<<"The stack from Top to Bottom: ";
    printStack(s);
    int value;
    cout<<"\nEnter the value that you want: ";
    cin>>value;
    sortedStack(s,value);
    printStack(s);

    return 0;
}