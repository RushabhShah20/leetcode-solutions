// Problem: Earliest Finish Time for Land and Water Rides I
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/
public class Solution
{
    public int solve(int n, int m, int[] a1, int[] d1, int[] a2, int[] d2)
    {
        int x = int.MaxValue;
        for (int i = 0; i < n; i++)
        {
            x = Math.Min(x, a1[i] + d1[i]);
        }
        int y = int.MaxValue;
        for (int i = 0; i < m; i++)
        {
            y = Math.Min(y, Math.Max(a2[i], x) + d2[i]);
        }
        return y;
    }
    public int EarliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration)
    {
        int n = landDuration.Length, m = waterDuration.Length;
        int x = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
        int y = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
        int ans = Math.Min(x, y);
        return ans;
    }
}