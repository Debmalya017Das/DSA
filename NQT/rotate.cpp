#include <bits/stdc++.h>
using namespace std;

void BlockSwap(vector<int> &a, int s, int e)
{
    while (s < e)
    {
        int t = a[s];
        a[s] = a[e];
        a[e] = t;
        s++, e--;
    }
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    // BlockSwap(a, 0, n - 1);  //for shifting left
    k = k % n;
    BlockSwap(a, 0, k - 1);
    BlockSwap(a, k, n - 1);
    BlockSwap(a, 0, n - 1); // for shifiting right
    cout << "After Rotating the array " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}