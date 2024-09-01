#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            c++;

            // if 4 x 9 is counted once then 9 x 4 counted too.
            if (n / i != i)
            {
                c = c + 1;
            }
        }
        // has only 2 divisors: itself and 1
    }
    if (c == 2)
        return 1;
    else
    {
        return 0;
    }
}
int main()
{
    int n = 11;
    if (checkPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}