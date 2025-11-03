// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
public class Solution
{
    public int MinCost(string colors, int[] neededTime)
    {
        int n = colors.Length, ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (colors[i] == colors[i - 1])
            {
                ans += (Math.Min(neededTime[i], neededTime[i - 1]));
                neededTime[i] = Math.Max(neededTime[i], neededTime[i - 1]);
            }
        }
        return ans;
    }
}