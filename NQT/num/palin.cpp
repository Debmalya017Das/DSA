#include <bits/stdc++.h>
using namespace std;

bool palin(int n)
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
    int n = 4554;
    if (palin(n))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
