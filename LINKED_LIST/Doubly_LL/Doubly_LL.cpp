#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};



int length(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}




void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;                                                                                                                                                                                                                                                                                          
}



void insertAtTail(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp ->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head,int data,int position){
    Node* newNode = new Node(data);
    int size = length(head);
    if(position > size){
        cout<<"\t\t***The Position value is wrong. \n****Change between the size of List."<<endl;
        cout<<"The Length of list is:"<<length(head)<<endl;
        return;
    }
    if(position == 0 || position == 1){
        insertAtHead(head,data);
        return;
    }else if(position == size){
        return insertAtTail(head,data);
    }

    int count = 1;
    Node* prevNode = head;
    while(count <= position-2){
        count++;
        prevNode = prevNode->next;
    }
    Node* currNode = prevNode;
    Node* forwardNode = prevNode->next;
    currNode->next = newNode;
    newNode ->next = forwardNode;

    newNode->prev = currNode;
    forwardNode->prev = newNode;

}

void printList(Node* &head){
    Node* temp = head;
    cout<<"\t\t***********The list is given: \n"<<endl;
    while(temp != NULL){
        cout<<temp->prev<<"\t"<<temp->data<<"\t"<<temp->next<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    printList(head);
    cout<<"\n\n";
    insertAtTail(head,70);
    cout<<"\n\n";
    printList(head);
    insertAtPosition(head,555,0);
    printList(head);
    cout<<"The Length of list is:"<<length(head)<<endl;
    return 0;
}        