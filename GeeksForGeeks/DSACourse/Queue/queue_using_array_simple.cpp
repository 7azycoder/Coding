/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:32:32
 * @modify date 2021-07-27 23:32:32
 * @desc Program to implement queue using array (simple implementation)
 */

#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
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

    // O(1)
    void enqueue(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }

    // O(n)
    void dequeue()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        return 0;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        return size - 1;
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
    q.dequeue();
    q.dequeue();
    return 0;
}