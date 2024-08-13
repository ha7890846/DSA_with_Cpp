#include<iostream>
#include<queue>
using namespace std;
void print(queue<int>& q){
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue elements are: ";
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    return;
}
int main(){
    queue<int> q1;
    queue<int>q;
    q.push(25);
    q.push(20);
    q.push(26);
    q.push(27);
    q.push(28);
    q.push(29);
    cout<<"The back: "<<q.back()<<endl;
    cout<<"The front: "<<q.front()<<endl;
    cout<<"The Queue is Empty : "<<q.empty()<<endl;
    cout<<"The size of queue is : "<<q.size()<<endl;
    // print stack 
    print(q);
    return 0;
}