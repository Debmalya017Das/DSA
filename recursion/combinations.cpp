// // 1)
// class Solution
// {
// public:
//     void rec(int ind, int x, vector<vector<int>> &a, vector<int> &temp, vector<int> &candi)
//     {
//         if (ind == candi.size())
//         {
//             if (x == 0)
//             {
//                 a.push_back(temp);
//             }
//             return;
//         }
//         if (candi[ind] <= x)
//         {
//             temp.push_back(candi[ind]);
//             rec(ind, x - candi[ind], a, temp, candi);
//             temp.pop_back();
//         }
//         rec(ind + 1, x, a, temp, candi);
//     }
//     vector<vector<int>> combinationSum(vector<int> &candidates, int target)
//     {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         rec(0, target, ans, temp, candidates);
//         return ans;
//     }
// };

// 2)
// class Solution
// {
// public:
//     void res(int ind, int x, vector<vector<int>> &a, vector<int> &ds, vector<int> &arr)
//     {
//         if (x == 0)
//             a.push_back(ds);
//         for (int i = ind; i < arr.size(); i++)
//         {
//             if (i > ind and arr[i] == arr[i - 1])
//                 continue;
//             if (arr[i] > x)
//                 break;
//             ds.push_back(arr[i]);
//             res(i + 1, x - arr[i], a, ds, arr);
//             ds.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
//     {
//         sort(candidates.begin(), candidates.end());
//         vector<vector<int>> ans;
//         vector<int> ds;
//         res(0, target, ans, ds, candidates);
//         return ans;
//     }
// };