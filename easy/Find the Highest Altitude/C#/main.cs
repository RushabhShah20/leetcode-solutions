// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
public class Solution
{
    public int LargestAltitude(int[] gain)
    {
        int n = gain.Length, ans = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            x += gain[i];
            ans = Math.Max(ans, x);
        }
        return ans;
    }
}