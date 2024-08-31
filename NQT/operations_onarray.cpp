#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &a, int n)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void print1(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void addbeg(vector<int> &a, int x)
{

    a.insert(a.begin(), x);
}
void addend(vector<int> &a, int x)
{
    a.push_back(x);
}
void addpos(vector<int> &a, int p, int x)
{
    if (p >= 0 && p <= a.size())
    {
        a.insert(a.begin() + p - 1, x);
    }
    else
    {
        cout << "Invalid position" << endl;
    }
}

void addbeg1(int *a, int x, int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = x;
}
void addend1(int *a, int x, int n)
{
    a[n] = x;
}
void addpos1(int *a, int p, int x, int n)
{
    for (int i = n; i >= p; i--)
    {
        a[i] = a[i - 1];
    }
    a[p - 1] = x;
    n++;
    print1(a, n);
}

int main()
{
    int arr[8] = {10, 8, 20, 48, 16, 9, 12};
    int e1 = 69;
    int p1 = 3;
    addbeg1(arr, e1, 8);
    print1(arr, 8);
    addend1(arr, e1, 8);
    print1(arr, 8);
    addpos1(arr, p1, e1, 8);

    cout << endl
         << " vector below " << endl;
    vector<int> a = {10, 9, 14, 8, 20, 48, 16, 9};
    int e = 17;
    int p = 4;

    addbeg(a, e);
    print(a, 8);
    addend(a, e);
    print(a, 8);
    addpos(a, p, e);
    print(a, 8);
}
