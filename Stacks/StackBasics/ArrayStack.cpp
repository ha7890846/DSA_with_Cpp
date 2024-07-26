#include<iostream>
using namespace std;
class ArrayStack{
    public:
    int *arr;
    int top;
    int size;

    public:
    ArrayStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top == size-1){
            cout<<"Stack is Full"<<endl;
        }
        elste{
            top++;
            arr[top] = data;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
            }
        else{
            top--;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
    void printStack(int* arr){
        while(!isEmpty()){
            cout<<arr[top]<<" ";
            pop();
        }
    }
};
int  main(){
    ArrayStack s(5);
    s.push(1);
    s.push(6);
    s.push(3);
    s.push(5);
    s.push(7);    
    s.printStack(s.arr);
    return 0;
}
