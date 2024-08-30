#include <bits/stdc++.h>
using namespace std;

int fL(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int arr1[] = {2, 5, 1, 3, 0};
    int n = 5;
    int max = fL(arr1, n);
    cout << "The largest element in the array is: " << max << endl;

    int arr2[] = {8, 10, 5, 7, 9};
    n = 5;
    max = fL(arr2, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}