// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
class Solution
{
public:
    int maximumEnergy(vector<int> &energy, int k)
    {
        int n = energy.size(), ans = INT_MIN;
        vector<int> dp(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (i >= n - k)
            {
                dp[i] = energy[i];
            }
            else
            {
                dp[i] = energy[i] + dp[i + k];
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};