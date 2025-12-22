// Problem: Delete Columns to Make Sorted III
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted-iii/
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        const int n = strs.size(), m = strs[0].size();
        vector<int> dp(m, 1);
        int x = 1;
        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = i + 1; j < m; j++)
            {
                bool z = true;
                for (int k = 0; k < n; k++)
                {
                    if (strs[k][i] > strs[k][j])
                    {
                        z = false;
                        break;
                    }
                }
                if (z == true)
                {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
            x = max(x, dp[i]);
        }
        const int ans = m - x;
        return ans;
    }
};