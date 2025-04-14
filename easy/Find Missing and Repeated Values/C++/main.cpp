// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        vector<int> freq(grid.size() * grid[0].size(), 0);
        vector<int> ans(2);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                freq[grid[i][j] - 1]++;
            }
        }
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] == 0)
            {
                ans[1] = i + 1;
            }
            if (freq[i] == 2)
            {
                ans[0] = i + 1;
            }
        }
        return ans;
    }
};