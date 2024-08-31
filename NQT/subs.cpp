#include <bits/stdc++.h>
using namespace std;

bool subs(vector<int> a1, vector<int> a2)
{
    int m = a1.size();
    int n = a2.size();
    if (m > n)
        return 0;
    set<int> s;
    for (auto i : a2)
        s.insert(i);

    for (int i = 0; i < m; i++)
    {
        if (s.find(a1[i]) == s.end())
            return 0;
    }
    return 1;
}
int main()
{
    vector<int> a1 = {1, 3, 4, 5, 2};
    vector<int> a2 = {2, 4, 3, 1, 7, 5, 15};

    if (subs(a1, a2))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}