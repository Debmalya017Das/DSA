#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    unordered_map<int, int> mp;

    for (auto i : a)
    {
        int f = i[0];
        int l = i[1];

        if (mp.find(l) != mp.end() and mp[l] == f)
        {
            cout << "( " << f << " , " << l << " )";
        }
        else
            mp[f] = l;
    }
}