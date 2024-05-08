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
void insertAtTail(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        head->next = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
void revList(Node* &head){
    //using while Loop
    // rev list using while looop...
    if(head == NULL){
        cout<<"The list is empty."<<endl;
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* next = curr ->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
Node* recuRev(Node* &prev,Node* &curr){
    // Base case........
    if(curr == NULL){
        return prev;
    }
    Node* forward = curr ->next;
    curr ->next = prev;
   return recuRev(curr,forward);
}
void printList(Node* &head){
    Node* temp = head;
    cout<<"\nprint The List: " ;
    while(temp != NULL){
        cout<<temp->data<<"->> ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    insertAtTail(head,70);
    insertAtTail(head,80);
    insertAtTail(head,90);
    insertAtTail(head,100);
    insertAtTail(head,110);
    printList(head);
    revList(head);
    cout<<"After the rev, List: ";
    printList(head);
    Node* curr = head;
    Node* prev = NULL;
    head = recuRev(prev,curr);
    cout<<"Print the list after recu :";
    printList(head);

    return 0;
}