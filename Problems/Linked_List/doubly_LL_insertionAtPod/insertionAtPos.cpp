#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node* prev;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
int getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "The length of List is:" << count << endl;
    return count;
}
void addNode(Node *head, int pos, int data)
{
    Node* newNode = new Node(data);
    int len = getLength(head);
    if(pos > len){
        cout<<"Enter the correct position value."<<endl;
        return;
    }
   if(head == NULL){
       head = newNode;
       Node* next = NULL;
       Node* prev = NULL;
   }
   Node* temp = head;
   int count = 0;
   while(count != pos){
       temp = temp->next;
       count++;
   }
   if(temp->next == NULL){
       temp->next = newNode;
       newNode->prev = temp;
   }else{
       Node* forwardNode = temp->next;
       temp->next = newNode;
       newNode->prev = temp;
       newNode->next = forwardNode;
       forwardNode->prev = newNode;
   }
}
// Print Liked List.,.....
void printList(Node *&head)
{
    Node *temp = head;
    cout << "\nprint The List: ";
    while (temp != NULL)
    {
        cout << temp->data << " << ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(2);
    Node *first = new Node(4);
    Node *sec = new Node(5);
    
// next pointer association
    head->next = first;
    first->next = sec;
    sec->next = NULL;
    

// prev pointer association....
    head->prev = NULL;
    first->prev = head;
    sec->prev = first;

    printList(head);
    addNode(head,1,1000);
    printList(head);
    return 0;
}