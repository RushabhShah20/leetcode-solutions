// Problem: Count Submatrices With Equal Frequency of X and Y
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/
class Solution
{
public:
    int numberOfSubmatrices(vector<vector<char>> &grid)
    {
        const int m = grid.size(), n = grid[0].size();
        int ans = 0;
        vector<vector<pair<int, int>>> dp(m + 1, vector<pair<int, int>>(n + 1, {0, 0}));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                const int x = grid[i][j] == 'X' ? 1 : 0, y = grid[i][j] == 'Y' ? 1 : 0;
                const int a = x + dp[i][j + 1].first + dp[i + 1][j].first - dp[i][j].first;
                const int b = y + dp[i][j + 1].second + dp[i + 1][j].second - dp[i][j].second;
                dp[i + 1][j + 1] = {a, b};
                if (a > 0 && a == b)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};