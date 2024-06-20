#include <bits/stdc++.h>
using namespace std;

void ss(int i, vector<int> &s, int sum, int a[], int n, int k)
{
    if (i >= n)
    {
        if (sum == k)
        {
            for (auto it : s)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    s.push_back(a[i]);
    sum += a[i];
    ss(i + 1, s, sum, a, n, k);

    sum -= a[i];
    s.pop_back();
    ss(i + 1, s, sum, a, n, k);
}

int main()
{
    int a[] = {1, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 2;
    vector<int> s;
    ss(0, s, 0, a, n, k);
}