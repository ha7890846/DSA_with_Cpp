#include<iostream>
#include<stack>
using namespace std;
void insertAtBegin(stack<int>&s, int& value){
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
    int lastItem = s.top();
    //remove Top Element.
    s.pop();
    insertAtBegin(s,lastItem);
    //printing the Stack again after changing ...
    cout<<"\nPrinting the Stack after changing the position of LastEle: ";
    printStack(s);

    return 0;
}