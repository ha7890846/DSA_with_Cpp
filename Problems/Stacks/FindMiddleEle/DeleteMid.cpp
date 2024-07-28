#include<iostream>
#include<stack>
using namespace std;
void midElement(stack<int>& s,int& size){
    //base case...
    if(s.empty()){
        cout<<"Stack Underflow.";
        return;
    }
    if(s.size() == (size/2)+1){
        cout<<"The mid: "<<s.top()<<", ";
       // Remove mid Element and push it..
        s.pop(); 
        return;
    }
    // save Top element, So that it can be push later 
    int temp = s.top();
    // Removing top ele to go deep in stack..
    s.pop();
    // Recursive call...
    midElement(s,size);
    // Now after satisfy the base case
    // push the all temp ele one by one
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int size = s.size();
    midElement(s,size);
    cout<<"\nThe stack is: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }



    return 0;
}