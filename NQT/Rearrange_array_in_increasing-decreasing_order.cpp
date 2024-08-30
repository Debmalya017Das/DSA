#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = n / 2, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
}