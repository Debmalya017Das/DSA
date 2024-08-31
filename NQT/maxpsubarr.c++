#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, -3, 0, -4, -5};

    if (nums.empty())
    {
        cout << 0;
        return 0;
    }

    int maxp = nums[0];
    int minp = nums[0];
    int maxx = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
            swap(maxp, minp);

        maxp = max(nums[i], maxp * nums[i]);
        minp = min(nums[i], minp * nums[i]);

        maxx = max(maxx, maxp);
    }
    cout << maxx;
}
// Explanation:
// maxp : Tracks the maximum product up to the current element.

//        minp : Tracks the minimum product up to the current element.

//               maxx : Stores the maximum product found overall.

//                      The loop starts from the second
//                      element(i = 1) since the first element is initialized in maxp,
//     minp, and maxx.

//               If the current element is negative,
//     the maximum product so far could become a minimum if multiplied by this negative number, so we swap maxp and minp.

//      We then calculate the maximum and minimum products up to the current element by either including the current element in the product chain
//                                                                                                  or starting fresh with the current element alone.

//                                                                                                     Finally,
//     maxx is updated with the maximum value found so far.

//     This approach handles both negative numbers and zeros correctly,
//     ensuring that the maximum product subarray is found.
