#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &a)
{
    for (int i = 0; i < a.size() / 2; i++)
    {
        swap(a[i], a[a.size() - i - 1]);
    }
}
int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    reverseArray(a);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}