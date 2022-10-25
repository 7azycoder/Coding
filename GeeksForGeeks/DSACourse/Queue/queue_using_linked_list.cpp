/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:48:39
 * @modify date 2021-07-27 23:48:39
 * @desc Program to implement queue using linked list
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

struct Queue
{
    Node *front, *rear;
    int size;

    Queue()
    {
        front = rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        size++;
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void dequeue()
    {
        if (front == NULL)
            return;

        size--;
        Node *temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete (temp);
    }

    int getSize()
    {
        return size;
    }

    Node *getFront()
    {
        return front;
    }

    Node *getRear()
    {
        return rear;
    }
};

int main()
{

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data << endl;
}
