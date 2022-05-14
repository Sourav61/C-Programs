#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
        head->prev = n;

    head = n;
}

void deletionAtHead(node *&head)
{
    node *temp = head;

    head = head->next;
    head->prev = NULL;

    delete temp;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deletionAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    cout << "After inserting nodes from tail, the Linked List becomes: " << endl;
    display(head);
    insertAtHead(head, 5);
    cout << "After inserting node at head, the Linked List becomes: " << endl;
    display(head);
    deletion(head, 5);
    cout << "After deleting a node, the Linked List becomes: " << endl;
    display(head);
    deletion(head, 1);
    cout << "After deleting a node from head, the Linked List becomes: " << endl;
    display(head);

    return 0;
}