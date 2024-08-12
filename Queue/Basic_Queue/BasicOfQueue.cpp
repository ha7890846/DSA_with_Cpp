// Queue creation Using arr;
#include<iostream>
using namespace std;
class QueueCreate{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    // constructer .......
    QueueCreate(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data){
        // first Element...
        rear++;
        if(front == -1){
            front++;
            arr[rear] = data;
            return;
        }

        if(rear >= size){
            cout<<"Q is full, Not proceeds with "<<data<<"."<<endl;
            return;
        }
        arr[rear] = data;
    }
    void popFront(){
        if(isEmpty()){
            cout<<"Q is Empty."<<endl;
            return;
        }
        arr[front] = -1;
        front++;
    }
    int getFront(){
        return arr[front];
    }
    void printQueue(int size){
        while(size--){
            cout<<getFront()<<", ";
            front++;
        }
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }
};
int main(){
    QueueCreate q(5);
    q.push(23);
    q.push(24);
    q.push(25);
    q.push(26);
    q.push(27);
    // Extra element for queue size..
    q.push(28);
    q.push(29);
    q.push(30);

    return 0;
} 