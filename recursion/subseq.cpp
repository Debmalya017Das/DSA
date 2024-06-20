#include <bits/stdc++.h>
using namespace std;

void subseq(int i, vector<int> &subs, int a[], int n)
{
    if (i >= n)
    {
        for (auto it : subs)
            cout << it << " ";
        cout << endl;
        return;
    }
    subs.push_back(a[i]); // taking the value (going left)
    subseq(i + 1, subs, a, n);
    subs.pop_back();
    // not taking going right
    subseq(i + 1, subs, a, n);
}
int main()
{
    int a[] = {3, 1, 2};
    int n = 3;
    vector<int> subs;
    subseq(0, subs, a, n);
}

// empty string or empty array can be a subsequence
// sequence should be maintained as per the original array or string
// Important algo is power set.

// TYPES: take / not take

//-----------main algo-------------//
// a is empty
/* void subseq(int i, vector<int> a)
{
    if (i >= n)
    {
        print[];
        return;
    }
    a.push_back(arr[i]);
    subseq(i + 1, a); ---- take
    a.remove(arr[i]);
    subseq(i + 1, a); ---- not take
} */

// stack space O(n) TC -> O(2^n)