// Problem: Maximal Square
// Link to the problem: https://leetcode.com/problems/maximal-square/
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        const int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        int x = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == '1')
                {
                    dp[i + 1][j + 1] = 1 + min(dp[i][j], min(dp[i + 1][j], dp[i][j + 1]));
                }
                x = max(x, dp[i + 1][j + 1]);
            }
        }
        const int ans = x * x;
        return ans;
    }
};