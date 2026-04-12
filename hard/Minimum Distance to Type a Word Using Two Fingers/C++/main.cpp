// Problem: Minimum Distance to Type a Word Using Two Fingers
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-type-a-word-using-two-fingers/
class Solution
{
public:
    int distance(const int a, const int b)
    {
        const int x1 = a / 6, x2 = b / 6, y1 = a % 6, y2 = b % 6, ans = abs(x1 - x2) + abs(y1 - y2);
        return ans;
    }
    int minimumDistance(string word)
    {
        const int n = word.size();
        vector<vector<int>> dp(n, vector<int>(26, 1000000000));
        for (int i = 0; i < 26; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            const int x = distance(word[i] - 'A', word[i - 1] - 'A');
            for (int j = 0; j < 26; j++)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + x);
                if (j == word[i - 1] - 'A')
                {
                    for (int k = 0; k < 26; k++)
                    {
                        const int y = distance(k, word[i] - 'A');
                        dp[i][j] = min(dp[i][j], dp[i - 1][k] + y);
                    }
                }
            }
        }
        int ans = 1000000000;
        for (int i = 0; i < 26; i++)
        {
            ans = min(ans, dp[n - 1][i]);
        }
        return ans;
    }
};