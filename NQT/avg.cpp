#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 1, 1, 5, 1};
    int n = a.size();
    double sum = 0.0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    cout << (double)sum / n << endl;
}