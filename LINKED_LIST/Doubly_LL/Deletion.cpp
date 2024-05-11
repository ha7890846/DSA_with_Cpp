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
// Deletion function in a list...
void deleteNode(Node *&head, int pos)
{
    int len = getLength(head);
    Node *temp = head;
    if (pos > len)
    {
        cout << "The Node is not in range." << endl;
        cout << "choose correct Num of Node to Delete." << endl;
        return;
    }
    //CASE: first Node to be delete ...
    if (pos == 0 || pos == 1)
    {
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    if (temp == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    else if (temp->next == NULL)
    {
        // single list...To be delete...
        head = NULL;
        delete temp;
    }
    int count = 1;
    while (count < pos)
    {
        count++;
        temp = temp->next;
    }
    Node* prevNode = temp->prev;
    Node* forward = temp->next;
    cout<<"The curr Node is:"<< temp->data <<endl;
    cout<<"The prevNode is:"<<prevNode->data <<endl;
    if (forward != NULL)
    {
        cout<<"The forward Node is:"<< forward->data <<endl;    
        prevNode->next = forward;
        forward->prev = prevNode;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }else{
        cout<<"Forward Node is: NULL"<<endl;
        prevNode->next = NULL;
        temp->prev = NULL;
        delete temp;
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
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *sec = new Node(30);
    Node *third = new Node(40);
    Node *fourth = new Node(50);
    Node *fifth = new Node(60);
    Node *sixth = new Node(70);
    Node *seventh = new Node(80);
// next pointer association
    head->next = first;
    first->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next =fifth;
    fifth-> next = sixth;
    sixth->next  = seventh;
    seventh->next = NULL;

// prev pointer association....
    head->prev = NULL;
    first->prev = head;
    sec->prev = first;
    third->prev = sec;
    fourth ->prev = third;
    fifth-> prev= fourth;
    sixth-> prev= fifth;
    seventh->prev = sixth;
    
    
    printList(head);
    deleteNode(head, 8);
    printList(head);
    return 0;
}