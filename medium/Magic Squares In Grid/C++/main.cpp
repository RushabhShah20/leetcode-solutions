// Problem: Magic Squares In Grid
// Link to the problem: https://leetcode.com/problems/magic-squares-in-grid/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMagicSquare(vector<vector<int>> &mat, int r, int c)
    {
        vector<int> seen(10, 0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                const int v = mat[r + i][c + j];
                if (v < 1 || v > 9 || seen[v])
                {
                    return false;
                }
                seen[v] = 1;
            }
        }
        if (mat[r][c] + mat[r][c + 1] + mat[r][c + 2] != 15)
        {
            return false;
        }
        if (mat[r + 1][c] + mat[r + 1][c + 1] + mat[r + 1][c + 2] != 15)
        {
            return false;
        }
        if (mat[r + 2][c] + mat[r + 2][c + 1] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c] + mat[r + 1][c] + mat[r + 2][c] != 15)
        {
            return false;
        }
        if (mat[r][c + 1] + mat[r + 1][c + 1] + mat[r + 2][c + 1] != 15)
        {
            return false;
        }
        if (mat[r][c + 2] + mat[r + 1][c + 2] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c] + mat[r + 1][c + 1] + mat[r + 2][c + 2] != 15)
        {
            return false;
        }
        if (mat[r][c + 2] + mat[r + 1][c + 1] + mat[r + 2][c] != 15)
        {
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m - 2; i++)
        {
            for (int j = 0; j < n - 2; j++)
            {
                if (isMagicSquare(grid, i, j))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};