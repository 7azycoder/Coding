/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-20 11:03:05
 * @modify date 2021-07-20 11:03:05
 * @desc Program to implement basic functionality of a singly linked list
 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void printRecursive(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    return printRecursive(head->next);
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    return head;
}

Node *deleteEnd(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;

    delete curr->next->next;
    curr->next = NULL;

    return head;
}

Node *deleteBegin(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head->next;
    delete head;
    return temp;
}

Node *insertPos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL)
        return head;

    temp->next = curr->next;
    curr->next = temp;

    return head;
}

int searchIterative(Node *head, int x)
{
    int pos = 1;
    while (head != NULL)
    {
        if (head->data == x)
            return pos;
        head = head->next;
        pos++;
    }

    return -1;
}

int searchRecursive(Node *head, int x)
{
    if (head == NULL)
        return -1;

    if (head->data == x)
        return 1;

    int res = searchRecursive(head->next, x);
    if (res == -1)
        return -1;
    return res = res + 1;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    // alternative shorter implementation
    // Node *head = new Node(10);
    // head->next =  new Node(20);
    // head->next->next = new Node(30);

    cout << head->data << "-->" << temp1->data << "-->" << temp2->data;

    cout << endl;

    // traverse linked list
    print(head);

    cout << endl;

    // traverse linked list recursive function
    printRecursive(head);

    // insert at beginning
    head = insertBegin(head, 5);
    cout << endl;
    print(head);

    // insert at end
    head = insertEnd(head, 35);
    cout << endl;
    print(head);

    // delete at beginning
    head = deleteBegin(head);
    cout << endl;
    print(head);

    // delete at end
    head = deleteEnd(head);
    cout << endl;
    print(head);

    // insert at position
    head = insertPos(head, 1, 1);
    cout << endl;
    print(head);

    // insert at position
    head = insertPos(head, 10, 10);
    cout << endl;
    print(head);

    // insert at position
    head = insertPos(head, 3, 23);
    cout << endl;
    print(head);

    // search iterative
    int pos = searchIterative(head, 23);
    cout << endl;
    cout << pos;

    // search iterative
    pos = searchRecursive(head, 20);
    cout << endl;
    cout << pos;

    return 0;
}