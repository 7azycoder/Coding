/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:34:51
 * @modify date 2021-07-27 23:34:51
 * @desc Program to implement basic functionality of a doubly linked list
 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;

    if (head != NULL)
        head->prev = temp;

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
    temp->prev = curr;

    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteBegin(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;
    head = head->next;

    delete temp;

    if (head == NULL)
        return NULL;

    head->prev = NULL;

    return head;

    // alternative code
    // if (head == NULL)
    //     return NULL;

    // if (head->next == NULL)
    // {
    //     delete head;
    //     return NULL;
    // }

    // Node *temp = head;
    // head = head->next;
    // head->prev = NULL;
    // delete temp;

    // return head;
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

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->prev->next = NULL;
    delete curr;

    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    print(head);
    cout << endl;

    // insert at beginning
    head = insertBegin(head, 5);
    print(head);
    cout << endl;

    // insert at end
    head = insertEnd(head, 35);
    print(head);
    cout << endl;

    // delete at begin
    head = deleteBegin(head);
    print(head);
    cout << endl;

    return 0;
}