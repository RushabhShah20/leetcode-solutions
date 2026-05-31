// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
class Solution
{
public:
    int maximumSaleItems(vector<vector<int>> &items, int budget)
    {
        const int n = items.size(), mx = 1500;
        vector<int> a(mx + 1, 0);
        for (int i = 0; i < n; i++)
        {
            a[items[i][0]]++;
        }
        vector<int> b(mx + 1, 0);
        for (int i = 1; i <= mx; i++)
        {
            for (int j = i; j <= mx; j += i)
            {
                b[i] += a[j];
            }
        }
        vector<int> dp(budget + 1, 0);
        for (int i = 0; i < n; i++)
        {
            const int x = items[i][1], y = b[items[i][0]] - 1;
            vector<int> c(budget + 1, -1);
            for (int j = x; j <= budget; j++)
            {
                if (dp[j - x] != -1)
                {
                    c[j] = dp[j - x] + 1 + y;
                }
            }
            for (int j = x; j <= budget; j++)
            {
                if (c[j - x] != -1)
                {
                    c[j] = max(c[j], c[j - x] + 1);
                }
            }
            for (int j = 0; j <= budget; j++)
            {
                dp[j] = max(dp[j], c[j]);
            }
        }
        const int ans = dp[budget];
        return ans;
    }
};