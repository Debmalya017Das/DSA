#include <bits/stdc++.h>
using namespace std;
double med(vector<int> a)
{
    int n = a.size();
    sort(a.begin(), a.end());
    return (n % 2 == 0) ? (double)(a[n / 2] + a[n / 2 - 1]) / 2 : a[n / 2];
}
int main()
{
    vector<int> a = {2, 4, 1, 3, 5};
    vector<int> b = {2, 5, 1, 7};

    cout << med(a) << endl;
    cout << med(b);
}