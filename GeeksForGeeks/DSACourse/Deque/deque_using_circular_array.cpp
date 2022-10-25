#include <bits/stdc++.h>
using namespace std;

// Rear is always (front + size - 1) % cap

struct Deque
{
    int cap, size, front;
    int *arr;
    Deque(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
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

    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "deque empty" << endl;
            return;
        }

        front = (front + 1) % cap;
        size--;
    }

    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "deque full" << endl;
            return;
        }

        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }

    void insertFront(int x)
    {
        if (isFull())
        {
            cout << "deque full" << endl;
            return;
        }

        front = (front - 1 + cap) % cap;
        arr[front] = x;
        size++;
    }

    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "deque empty" << endl;
            return;
        }
        size--;
    }
};

int main()
{
    Deque d(4);
    d.insertFront(10);
    d.insertRear(20);
    d.insertRear(30);
    d.deleteFront();
    d.deleteRear();
    return 0;
}