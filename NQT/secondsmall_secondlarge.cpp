#include <bits/stdc++.h>
using namespace std;

int sS(vector<int> &a)
{
    int m = INT_MAX;
    int n = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        m = min(a[i], m);
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < n and a[i] != m)
        {
            n = a[i];
        }
    }
    return n;
}

int sL(vector<int> &a)
{
    int m = a[0];
    int n = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > n and a[i] != m)
        {
            n = a[i];
        }
    }
    return n;
}
int main()
{
    vector<int> a = {1, 2, 4, 7, 7, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int S = sS(a);
    int L = sL(a);
    cout << "Second smallest is " << S << endl;
    cout << "Second largest is " << L << endl;
    return 0;
}