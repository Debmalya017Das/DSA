#include <bits/stdc++.h>
using namespace std;

// didnot use visited here because it would be complicated to do so rather changed visited land to 2
class Solution
{
public:
    bool isl(vector<vector<char>> &g, int r, int c)
    {

        int n = g.size();
        int m = g[0].size();

        if (r < 0 || r >= n || c < 0 || c >= m || g[r][c] == '0' || g[r][c] == '2')
            return 0;
        g[r][c] = '2';

        isl(g, r + 1, c);
        isl(g, r - 1, c);
        isl(g, r, c + 1);
        isl(g, r, c - 1);

        return 1;
    }

    int numIslands(vector<vector<char>> &grid)
    {

        int c = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isl(grid, i, j) == true)
                    c++;
            }
        }
        return c;
    }
};