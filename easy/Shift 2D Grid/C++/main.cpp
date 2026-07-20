// Problem: Shift 2D Grid
// Link to the problem: https://leetcode.com/problems/shift-2d-grid/
class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                const int x = (i + (j + k) / n) % m, y = (j + k) % n;
                ans[x][y] = grid[i][j];
            }
        }
        return ans;
    }
};