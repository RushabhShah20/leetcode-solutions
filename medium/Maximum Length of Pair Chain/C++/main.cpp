// Problem: Maximum Length of Pair Chain
// Link to the problem: https://leetcode.com/problems/maximum-length-of-pair-chain/
class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        const int n = pairs.size();
        int ans = 1;
        sort(pairs.begin(), pairs.end());
        vector<int> dp(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (pairs[i][0] > pairs[j][1])
                    {
                        dp[i] = max(dp[i], dp[j] + 1);
                        ans = max(ans, dp[i]);
                    }
                }
            }
        }
        return ans;
    }
};