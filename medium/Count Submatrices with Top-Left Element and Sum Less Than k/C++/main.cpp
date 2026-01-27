// Problem: Count Submatrices with Top-Left Element and Sum Less Than k
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
class Solution
{
public:
    int countSubmatrices(vector<vector<int>> &grid, int k)
    {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + grid[i - 1][j - 1];
            }
        }
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (prefix[i][j] <= k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};