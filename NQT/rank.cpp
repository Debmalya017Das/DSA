#include <bits/stdc++.h>
using namespace std;

bool sortp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 3, 1, 2};

    unordered_map<int, int> m;
    for (auto i : arr)
    {
        m[i]++;
    }
    vector<pair<int, int>> p;
    for (auto i : m)
    {
        p.push_back({i.first, i.second});
    }
    sort(p.begin(), p.end(), sortp);

    for (int i = 0; i < p.size(); i++)
    {
        while (p[i].second > 0)
        {
            cout << p[i].first << " ";
            p[i].second--;
        }
    }
}