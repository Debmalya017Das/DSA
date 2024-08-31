#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, -1, 8, 4};
    int s = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        s += nums[i];
    }
    int l = 0, r = s;
    for (int i = 0; i < nums.size(); i++)
    {
        r -= nums[i];
        if (l == r)
        {
            cout << i;
        }
        l += nums[i];
    }
}