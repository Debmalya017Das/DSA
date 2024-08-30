#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> a)
{
    map<int, int> mp;
    for (auto i : a)
    {
        mp[i]++;
    }
    for (auto i : mp)
    {
        cout << i.first << " ";
        cout << i.second << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> a = {10, 5, 10, 15, 10, 5};
    countFreq(a);
    return 0;
}