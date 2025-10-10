// Problem: Taking Maximum Energy From the Mystic Dungeon
// Link to the problem: https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/
public class Solution
{
    public int MaximumEnergy(int[] energy, int k)
    {
        int n = energy.Length, ans = Int32.MinValue;
        int[] dp = new int[n];
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
            ans = Math.Max(ans, dp[i]);
        }
        return ans;
    }
}