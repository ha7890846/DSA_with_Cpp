#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
    if (pos == 0 || pos == 1)
    {
        head = temp->next;
        temp->next = NULL;
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
        // single list...
        head = NULL;
        delete temp;
    }
    int count = 1;
    Node *prev = head;
    while (count < pos)
    {
        count++;
        prev = temp;
        temp = temp->next;
    }
    Node *forward = temp->next;
    if (forward == NULL)
    {
        prev->next = NULL;
        delete temp;
    }
    else
    {
        prev->next = forward;
        temp->next = NULL;
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

    head->next = first;
    first->next = sec;
    sec->next = third;
    third->next = NULL;
    printList(head);
    deleteNode(head, 4);
    printList(head);
    return 0;
}