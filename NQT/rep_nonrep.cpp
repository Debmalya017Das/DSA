#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 1, 2, 3, 4, 4, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    unordered_map<int, int> mp;

    for (auto i : a)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
            cout << i.first << " ";
    }
    cout << endl;
    cout << "non rep : " << endl;
    for (auto i : mp)
    {
        if (i.second == 1)
            cout << i.first << " ";
    }
}