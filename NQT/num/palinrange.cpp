#include <bits/stdc++.h>
using namespace std;

bool isPalin(int n)
{
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + (temp) % 10;
        temp /= 10;
    }
    // cout << rev;
    if (rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int min = 100;
    int max = 150;
    for (int i = min; i <= max; i++)
    {
        if (isPalin(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}