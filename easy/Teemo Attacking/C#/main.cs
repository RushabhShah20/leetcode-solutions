// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
public class Solution
{
    public int FindPoisonedDuration(int[] timeSeries, int duration)
    {
        int ans = 0, n = timeSeries.Length;
        for (int i = 1; i < n; i++)
        {
            ans += Math.Min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        ans += duration;
        return ans;
    }
}