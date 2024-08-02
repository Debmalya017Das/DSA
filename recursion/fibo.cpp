#include <bits/stdc++.h>
using namespace std;

int fibo(int i)
{
    if (i <= 1)
        return i;
    int f = fibo(i - 1);
    int s = fibo(i - 2);
    return f + s;
}
int main()
{
    int n = 4;
    cout << fibo(n);
}
// TC almost 2^n exponential almost