/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-07 22:22:35
 * @modify date 2021-07-07 22:22:35
 * @desc [description]
 */

// FIXME: Output for 0 is 0 digits which is wrong

#include <iostream>
using namespace std;

int countDigits(long n)
{
    if (n == 0)
    {
        return 0;
    }

    return 1 + countDigits(n / 10);
}

int main()
{
    long n;
    cout << "Input: ";
    cin >> n;
    cout << "Output: " << countDigits(n);
    return 1;
}