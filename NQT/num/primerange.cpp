#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n)
{
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            c++;
            if (n / i != i)
            {
                c++;
            }
        }
    }
    if (c == 2)
        return 1;
    return 0;
}
void range(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (checkprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a = 0, b = 1000;
    range(a, b);
    return 0;
}