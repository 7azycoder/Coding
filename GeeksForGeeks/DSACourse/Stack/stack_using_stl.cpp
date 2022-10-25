/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-27 23:33:52
 * @modify date 2021-07-27 23:33:52
 * @desc Program to implement stack using STL
 */

// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.push(5);
    cout << s.top() << endl;

    while (s.empty() == false)
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}