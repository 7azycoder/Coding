/**
 * @author Lovepreet Singh
 * @email 7azycoder@gmail.com
 * @create date 2021-07-07 22:22:43
 * @modify date 2021-07-07 22:22:56
 * @desc [description]
 */

// FIXME: Output for 0 is some negative digits which is wrong

#include <iostream>
#include <math.h>
using namespace std;

int countDigits(long n)
{
    return floor(log10(n) + 1);
}

int main()
{
    long n;
    cout << "Input: ";
    cin >> n;
    cout << "Output: " << countDigits(n);
    return 1;
}