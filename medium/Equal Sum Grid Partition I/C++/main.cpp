// Problem: Equal Sum Grid Partition I
// Link to the problem: https://leetcode.com/problems/equal-sum-grid-partition-i/
class Solution
{
public:
    bool canPartitionGrid(vector<vector<int>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        long long x = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x += grid[i][j];
            }
        }
        if (x % 2 != 0)
        {
            return false;
        }
        const long long z = x / 2;
        long long y = 0;
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                y += grid[i][j];
            }
            if (y == z)
            {
                return true;
            }
        }
        y = 0;
        for (int j = 0; j < n - 1; j++)
        {
            for (int i = 0; i < m; i++)
            {
                y += grid[i][j];
            }
            if (y == z)
            {
                return true;
            }
        }
        return false;
    }
};