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
void insertAtBegin(stack<int>&s, int value){
    // Base case
    if(s.empty()){
        //If stack is empty push value at begin..
        s.push(value);
        return;
    }
    // Store the top item of stack..
    int temp = s.top();
    // pop item from stack....
    s.pop();
    // Recursive call..
    insertAtBegin(s,value);
    // Push the temp value ....
    s.push(temp);
}
void revStack(stack<int>& s){
    //Base Case....
    if(s.empty()){
        return;
    }
    // Store top element in X..
    int x = s.top();
    // Pop top ele...
    s.pop();
    // Recursive call...
    revStack(s);
    // after return Push last at bottom...
    insertAtBegin(s,x);
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
    revStack(s);
    cout<<"\nPrinting the Stack: ";
    printStack(s);
    return 0;
}