// Problem: Minimum Operations to Make Columns Strictly Increasing
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-columns-strictly-increasing/
class Solution
{
public:
    int minimumOperations(vector<vector<int>> &grid)
    {
        int ans = 0, m = grid.size(), n = grid[0].size();
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m - 1; i++)
            {
                if (grid[i + 1][j] <= grid[i][j])
                {
                    ans += (grid[i][j] - grid[i + 1][j] + 1);
                    grid[i + 1][j] = grid[i][j] + 1;
                }
            }
        }
        return ans;
    }
};