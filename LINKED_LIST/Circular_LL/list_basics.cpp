#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


  

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *sec = new Node(30);
    Node *third = new Node(40);

    head->next = first;
    first->next = sec;
    sec->next = third;
    // third will be point to any previous node
    // to make a loop...
    third->next = first;
    
    return 0;
}