#include<iostream>
#include<stack>
using namespace std;
void sortedStack(stack<int>&s, int &value){
    // base case....
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp;
   // CASE: When the top() is greater than the value

    if(s.top()> value){
        //store the top into temp and pop it..
        temp = s.top();
        s.pop();
    }
    // CASE: When the value is greater or equal to top
    else{
        // Push the value at top and return back recursive stack call...
        s.push(value);
        return;
    }
    // Recu call.
    sortedStack(s,value);
    // after the pushing value into stack..
    // Now push the temp store value into stack in-sequence
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
    cout<<"After process the value in stack from Top to Bottom: ";
    printStack(s);
    cout<<endl;
    return 0;
}