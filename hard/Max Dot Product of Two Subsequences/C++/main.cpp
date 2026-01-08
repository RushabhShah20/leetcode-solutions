// Problem: Max Dot Product of Two Subsequences
// Link to the problem: https://leetcode.com/problems/max-dot-product-of-two-subsequences/
class Solution
{
public:
    int maxDotProduct(vector<int> &nums1, vector<int> &nums2)
    {
        const int n = nums1.size(), m = nums2.size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MIN));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = nums1[i] * nums2[j];
                if (i > 0 && j > 0)
                {
                    x += max(0, dp[i - 1][j - 1]);
                }
                int y = x;
                if (i > 0)
                {
                    y = max(y, dp[i - 1][j]);
                }
                if (j > 0)
                {
                    y = max(y, dp[i][j - 1]);
                }
                dp[i][j] = y;
            }
        }
        const int ans = dp[n - 1][m - 1];
        return ans;
    }
};