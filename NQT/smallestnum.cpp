#include <bits/stdc++.h>
using namespace std;

int sm(vector<int> &a)
{
    // method 1
    // int mini = INT_MAX;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     mini = min(a[i], mini);
    // }

    // method 2

    int mini = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (mini > a[i])
            mini = a[i];
    }
    return mini;
}
int main()
{
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The smallest element in the array is: " << sm(arr1) << endl;
    cout << "The smallest element in the array is: " << sm(arr2);

    return 0;
}