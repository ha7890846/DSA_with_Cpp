#include<iostream>
using namespace std;

//class ......
class Node{
    public:
    int data;
    Node* next;

    //constructor...
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
// length fn to find size of list....
int length(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
// Insertion At Head .....
void insertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        cout<<"The List is Empty.";
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}


// Insertion At Tail....
void insertAtTail(Node* &head,int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    if(head == NULL){
        cout<<"The List is Empty.";
        head = newNode;
        return;
    }
    while( temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtPosition(Node* &head,int data,int position){
    Node* newNode = new Node(data);
    int size = length(head);
    if(position > size){
        cout<<"\t\t***The Position value is wrong. \n****Change between the size of List."<<endl;
        return;
    }
    // When The position is in begining...
    if(position == 0 || position == 1){
        insertAtHead(head,data);
        return;
    }else if(position == size){
        return insertAtTail(head,data);
    }
    int count = 1;
    Node* prevNode = head;
    // when List is empty......
    if(prevNode == NULL){
        head = newNode;
    }
    while( count <= position-2 ){
        count++;
        prevNode = prevNode->next;
    }
    Node* currNode = prevNode;
    Node* forwardNode = prevNode->next;
    prevNode->next = newNode;
    newNode->next = forwardNode;
}

// Print Liked List.,.....
void printList(Node* &head){
    Node* temp = head;
    cout<<"\nprint The List: ";
    while(temp != NULL){
        cout<<temp->data<<" << ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // creat empty LL.
    Node* head = NULL; 
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtTail(head,50);
    insertAtHead(head,90);
    printList(head);
    insertAtPosition(head,55,6);
    printList(head);
    cout<<"The Length of List is: "<<length(head)<<endl;
    return 0;
}