// Problem: Number of Ways to Divide a Long Corridor
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/
class Solution
{
public:
    int mod = 1e9 + 7;
    int dp[100005][3];
    string s;
    int count(int idx, int seats)
    {
        if (idx == s.size())
        {
            return seats == 2 ? 1 : 0;
        }
        if (dp[idx][seats] != -1)
        {
            return dp[idx][seats];
        }
        long long ans = 0;
        if (seats == 2)
        {
            if (s[idx] == 'S')
            {
                ans = count(idx + 1, 1);
            }
            else
            {
                ans = (count(idx + 1, 0) + count(idx + 1, 2)) % mod;
            }
        }
        else
        {
            if (s[idx] == 'S')
            {
                ans = count(idx + 1, seats + 1);
            }
            else
            {
                ans = count(idx + 1, seats);
            }
        }
        return dp[idx][seats] = ans;
    }
    int numberOfWays(string corridor)
    {
        s = corridor;
        memset(dp, -1, sizeof(dp));
        int ans = count(0, 0);
        return ans;
    }
};