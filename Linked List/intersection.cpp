#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;

    head = n;
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
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void intersect(node *&head1, node *&head2, int k)
{
    node *temp1 = head1;
    k--;
    while (k--)
    {
        temp1 = temp1->next;
    }

    node *temp2 = head2;

    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}

int length(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;

    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {

        ptr1 = ptr1->next;

        if (ptr1 == NULL)
        {
            return -1;
        }

        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head1, arr[i]);
    }

    insertAtTail(head2, 9);
    insertAtTail(head2, 10);

    display(head1);
    display(head2);

    intersect(head1, head2, 3);

    display(head1);
    display(head2);

    intersection(head1, head2) != -1 ? (cout << "The given Linked Lists intersect at node " << intersection(head1, head2) << endl) : (cout << "The given Linked List do not intersect!!" << endl);

    return 0;
}