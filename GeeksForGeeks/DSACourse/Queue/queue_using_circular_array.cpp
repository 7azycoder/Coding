/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:31:51
 * @modify date 2021-07-27 23:31:51
 * @desc Program to implement queue using circular array (efficient implementation)
 */

#include <bits/stdc++.h>
using namespace std;

/*
enqueue:  front = (front + 1) % cap;
    size--;

dequeue: rear = (front + size -1) % cap;
    rear = (rear + 1) % cap;
    arr[rear] = x;
    size++;
*/

struct Queue
{
    int *arr;
    int front, cap, size;
    Queue(int c)
    {
        cap = c;
        arr = new int[cap];
        front = size = 0;
    }

    bool isFull()
    {
        return size == cap;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        return front;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        return (front + size - 1) % cap;
    }

    // O(1)
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "queue full" << endl;
            return;
        }
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    // O(1)
    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    q.dequeue();
    q.dequeue();
    return 0;
}