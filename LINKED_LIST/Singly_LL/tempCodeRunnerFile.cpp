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