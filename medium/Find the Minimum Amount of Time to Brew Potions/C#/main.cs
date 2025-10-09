// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
public class Solution
{
    public long MinTime(int[] skill, int[] mana)
    {
        int n = skill.Length, m = mana.Length;
        long[] ans = new long[n + 1];
        Array.Fill(ans, 0);
        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                ans[i + 1] = Math.Max(ans[i + 1], ans[i]) + ((long)(mana[j]) * (long)(skill[i]));
            }
            for (int i = n - 1; i > 0; i--)
            {
                ans[i] = ans[i + 1] - ((long)(mana[j]) * (long)(skill[i]));
            }
        }
        return ans[n];
    }
}