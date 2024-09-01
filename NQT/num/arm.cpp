#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int p = 0;
    while (temp != 0)
    {
        temp /= 10;
        p++;
    }

    int temp2 = n;
    int s = 0;
    while (temp2 > 0)
    {
        int x = temp2 % 10;
        // int power = 1;
        // for (int i = 0; i < p; i++)
        // {
        //     power *= x;
        // }

        s += pow(x, p);
        temp2 /= 10;
    }
    return (s == n);
}

int main()
{
    int number = 153;
    if (isArmstrong(number))
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
