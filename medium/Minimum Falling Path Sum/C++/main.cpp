// Problem: Minimum Falling Path Sum
// Link to the problem: https://leetcode.com/problems/minimum-falling-path-sum/
class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        const int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            dp[0][i] = matrix[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    const int x = dp[i - 1][j] + matrix[i][j], y = dp[i - 1][j + 1] + matrix[i][j];
                    dp[i][j] = min(x, y);
                }
                else if (j == (n - 1))
                {
                    const int x = dp[i - 1][j] + matrix[i][j], y = dp[i - 1][j - 1] + matrix[i][j];
                    dp[i][j] = min(x, y);
                }
                else
                {
                    const int x = dp[i - 1][j - 1] + matrix[i][j], y = dp[i - 1][j] + matrix[i][j], z = dp[i - 1][j + 1] + matrix[i][j];
                    dp[i][j] = min({x, y, z});
                }
            }
        }
        const int ans = *min_element(dp[n - 1].begin(), dp[n - 1].end());
        return ans;
    }
};