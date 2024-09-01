#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 28;
    int s = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (n % i == 0)
    //         s += i;
    // }

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            if (i == sqrt(n) or i == 1)
                s += i;
            else
                s += (i + n / i);
    }
    if (n == s)
        cout << "perfect" << endl;
    else
        cout << " not perfect" << endl;
}