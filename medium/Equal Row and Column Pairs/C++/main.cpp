// Problem: Equal Row and Column Pairs
// Link to the problem: https://leetcode.com/problems/equal-row-and-column-pairs/
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int ans = 0;
        vector<vector<int>> cols(grid.size(), vector<int>(grid.size(), 0));
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                cols[j][i] = grid[i][j];
            }
        }
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                if (grid[i] == cols[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};