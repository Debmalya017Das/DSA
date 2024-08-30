#include <bits/stdc++.h>
using namespace std;

int remdup(vector<int> &a)
{
    sort(a.begin(), a.end());
    int i = 0, j = 1, n = a.size();
    while (j < n)
    {
        if (a[i] != a[j])
        {
            i++;
            a[i] = a[j];
        }
        j++;
    }
    return i + 1;
}
void remdup2(vector<int> a)
{
    // gives reverse in unordered_set.
    set<int> s;
    sort(a.begin(), a.end());
    for (auto i : a)
    {
        s.insert(i);
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {2, 3, 1, 9, 3, 1, 3, 9};
    int k = remdup(a);
    remdup2(a);
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
}