#include<iostream>
using namespace std;
class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};
void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node* findMid(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
    Node* midNode = findMid(head);
    Node* newNode = new Node(x);
    Node* nextNode = midNode->next;
    midNode->next = newNode;
    newNode->next = nextNode;
	// Code here
	return head;
}
int main() {

  Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(2);
  Node* fourth = new Node(3);
  Node* fifth = new Node(4);
  Node* sixth = new Node(4);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;

  cout << "input LL: ";
  print(head);
  int value;
  cout<<"Enter the value to insert: "<<endl;
  cin>>value;
  cout<<"You Have entered: "<<value<<endl;
  insertInMiddle(head,value);
  cout << "output LL: " ;
  print(head);
  return 0;
}