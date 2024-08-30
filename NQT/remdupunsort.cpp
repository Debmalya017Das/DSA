#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    vector<int> a = {4, 3, 9, 2, 89, 34, 4, 1, 10, 89, 34};
    for (int i = 0; i < a.size(); i++)
    {
        if (s.find(a[i]) == s.end())
        {
            cout << a[i] << " ";
            s.insert(a[i]);
        }
    }
    /// UNNECESSARY
    // int k = 0;
    // for (auto i : s)
    // {
    //     a[k++] = i;
    // }
    // for (int i = 0; i < k; i++)
    // {
    //     cout << a[i] << " ";
    // }
}