#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isl(vector<vector<int>> &g, int r, int c)
    {
        int n = g.size();
        int m = g[0].size();

        if (r < 0 || c < 0 || r >= n || c >= m || g[r][c] == 0 || g[r][c] == 2)
            return 0;
        g[r][c] = 2;

        int s = 1;
        s += isl(g, r + 1, c);
        s += isl(g, r - 1, c);
        s += isl(g, r, c + 1);
        s += isl(g, r, c - 1);

        return s;
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int size = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int c = isl(grid, i, j);
                if (c > size) // incase of minimum size put c>0 and c < size and size=INT_MAX
                    size = c;
            }
        }
        return size;
    }
};