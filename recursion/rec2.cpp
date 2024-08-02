#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 2 var
// void rev(int l, int a[], int r)
// {
//     if (l >= r)
//         return;
//     swap(a[l], a[r]);
//     rev(l + 1, a, r - 1);
// }
// int main()
// {
//     int a[5];
//     for (int i = 0; i < 5; i++)
//         cin >> a[i];
//     rev(0, a, 4);
//     for (int i = 0; i < 5; i++)
//         cout << a[i] << " ";
// }
// single var
void rev(int l, int a[], int n)
{
    if (l >= n / 2)
        return;
    swap(a[l], a[n - l - 1]);
    rev(l + 1, a, n);
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    rev(0, a, 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}