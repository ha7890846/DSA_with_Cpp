#include<iostream>
#include<stack>
using namespace std;

int main(){
    int size = 5;
    stack<int>x;            //Without assign Size value
    stack<int>s;         //using size ;
    // s stack push items................
    s.push(46);
    s.push(48);
    s.push(56);
    s.push(13);
    s.push(15);
    s.push(56);
    s.push(79);
    // X stack Push item
    x.push(12);
    x.push(13);
    x.push(14);
    x.push(15);
    x.push(16);

    // Swapping stack element of  X<-->S
    s.swap(x);
    cout<<"After feeding Element Stack size: "<<s.size()<<endl;
    cout<<"Printing S-stack items after Swapping: ";
    while(!s.empty()){
        cout<<s.top()<<", ";            //it will print Stack item in reverse order..
        s.pop();
    }

    cout<<"\nPrinting X-stack items after Swapping: ";
    while(!x.empty()){
        cout<<x.top()<<", ";            //it will print Stack item in reverse order..
        x.pop();
    }
    cout<<"\nStack is Empty: "<<s.empty()<<endl;
    cout<<"Stack size: "<<s.size()<<endl;
    return 0;
}