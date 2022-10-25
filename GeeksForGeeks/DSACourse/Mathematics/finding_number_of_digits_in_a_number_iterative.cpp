/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-07 22:22:24
 * @modify date 2021-07-07 22:22:24
 * @desc [description]
 */

// FIXME: Output for 0 is 0 digits which is wrong

#include <iostream>
using namespace std;

int countDigits(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    long n;
    cout << "Input: ";
    cin >> n;
    cout << "Output: " << countDigits(n);
    return 1;
}