#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    // constructor....
    node(){
        this->data = 0;
        this->next =NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHhead(node* &head,node* &tail,int data){
    // create new node.....
    node* newNode = new node(data);
    if(tail == NULL){
        tail = newNode;
        head = newNode;
        return;
    }
    // link with next data.....
    newNode->next = head;
    // head move to new node...
    head = newNode;
}
void insertAtTail(node* &head,node* &tail,int data){
    if(tail == NULL){
        node* newNode = new node(data);
        tail = newNode;
        head = newNode;
        return;
    }
    node* newNode = new node(data);
    tail->next = newNode;
    tail = newNode;
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtHhead(head,tail,209);
    insertAtHhead(head,tail, 23);
    insertAtTail(head,tail,200);
    insertAtTail(head,tail,30);
    print(head);
    return 90;
}