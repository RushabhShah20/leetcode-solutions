// Problem: Jump Game V
// Link to the problem: https://leetcode.com/problems/jump-game-v/
class Solution
{
public:
    int dfs(const int j, vector<int> &dp, const int n, const vector<int> &arr, const int d)
    {
        if (dp[j] != 0)
        {
            return dp[j];
        }
        int ans = 1;
        for (int i = j - 1; i >= max(0, j - d) && arr[j] > arr[i]; i--)
        {
            ans = max(ans, 1 + dfs(i, dp, n, arr, d));
        }
        for (int i = j + 1; i <= min(n - 1, j + d) && arr[j] > arr[i]; i++)
        {
            ans = max(ans, 1 + dfs(i, dp, n, arr, d));
        }
        dp[j] = ans;
        return dp[j];
    }
    int maxJumps(vector<int> &arr, int d)
    {
        const int n = arr.size();
        vector<int> dp(n, 0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, dfs(i, dp, n, arr, d));
        }
        return ans;
    }
};