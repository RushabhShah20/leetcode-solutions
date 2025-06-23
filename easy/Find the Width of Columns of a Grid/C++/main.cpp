// Problem: Find the Width of Columns of a Grid
// Link to the problem: https://leetcode.com/problems/find-the-width-of-columns-of-a-grid/
class Solution
{
public:
    int width(int n)
    {
        if (n < 0)
        {
            return 1 + width(-1 * n);
        }
        else if (n == 0)
        {
            return 1;
        }
        else
        {
            int ans = 0;
            while (n > 0)
            {
                ans++;
                n /= 10;
            }
            return ans;
        }
    }
    vector<int> findColumnWidth(vector<vector<int>> &grid)
    {
        vector<int> ans(grid[0].size(), 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                ans[j] = max(ans[j], width(grid[i][j]));
            }
        }
        return ans;
    }
};