/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:35:23
 * @modify date 2021-07-27 23:35:23
 * @desc Program to reverse a doubly linked list
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL, *curr = head;
    while (curr != NULL)
    {
        // swapping
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev;
    }

    return prev->prev;
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

    // reverse
    head = reverse(head);
    print(head);
    cout << endl;

    return 0;
}