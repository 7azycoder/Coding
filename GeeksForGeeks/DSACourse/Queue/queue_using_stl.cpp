/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-28 00:02:09
 * @modify date 2021-07-28 00:02:09
 * @desc Program to implement queue using STL
 */

// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;

    cout << q.size() << endl;

    while (q.empty() == false)
    {
        cout << q.front() << " " << q.back() << endl;
        q.pop();
    }
    return 0;
}