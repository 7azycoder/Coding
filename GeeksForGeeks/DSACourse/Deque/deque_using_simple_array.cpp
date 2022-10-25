#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int cap, size;
    int *arr;
    Deque(int c)
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
    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "deque full" << endl;
            return;
        }

        arr[size] = x;
        size++;
    }

    // O(1)
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "deque empty" << endl;
            return;
        }
        size--;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;

        return size - 1;
    }

    // O(n)
    void insertFront(int x)
    {
        if (isFull())
        {
            {
                cout << "deque full" << endl;
                return;
            }
        }

        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];

        arr[0] = x;
        size++;
    }

    // O(n)
    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "deque empty" << endl;
            return;
        }

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

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << endl;
    }
};

int main()
{
    Deque d(5);

    d.insertRear(10);
    d.insertFront(20);
    d.insertRear(30);
    d.insertFront(40);
    d.deleteFront();
    d.deleteRear();
    d.print();

    return 0;
}