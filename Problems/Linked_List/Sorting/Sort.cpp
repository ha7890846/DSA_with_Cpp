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
Node* segregate(Node *head) {
        
        Node* zeros = NULL;
        Node* zeros_end = NULL;
        Node* ones = NULL;
        Node* ones_end = NULL;
        Node* twos = NULL;
        Node* twos_end = NULL;
        
        
        // Add code here
        Node* temp = head;
        while(temp != NULL){
            int val = temp->data;
            if(val == 0){
                if(zeros == NULL){
                    zeros = temp;
                    zeros_end = zeros;
                }else{
                    zeros_end->next = temp;
                    zeros_end = zeros_end->next; 
                }
            }
            if(val == 1){
                if(ones == NULL){
                    ones = temp;
                    ones_end = ones;
                }else{
                    ones_end->next = temp;
                    ones_end = ones_end->next; 
                }
            }
            if(val == 2){
                if(twos == NULL){
                    twos = temp;
                    twos_end = twos;
                }else{
                    twos_end->next = temp;
                    twos_end = twos_end->next; 
                }
            }
            temp = temp->next;
        }
        if(zeros != NULL && ones != NULL && twos != NULL){
            zeros_end->next = ones;
            ones_end->next = twos;
            twos_end->next = NULL;
        }
        if(ones == NULL && zeros == NULL){
            return twos;
        }
        if(ones == NULL && twos == NULL){
            return zeros;
        }
        if(zeros == NULL && twos == NULL){
            return ones;
        }
        if(zeros == NULL && ones != NULL && twos != NULL){
            zeros = ones;
            ones_end->next = twos;
            twos_end->next = NULL;
        }
        if(zeros != NULL && ones == NULL && twos != NULL){
            zeros_end->next = twos;
            twos_end->next = NULL;
        }
        if(zeros != NULL && ones != NULL && twos == NULL){
            zeros_end->next = ones;
            ones_end->next = twos;
        }
        return zeros;
    }
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
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *sec = new Node(0);
    Node *third = new Node(0);

    head->next = first;
    first->next = sec;
    sec->next = third;
    third->next = NULL;
    printList(head);
    
    return 0;
}