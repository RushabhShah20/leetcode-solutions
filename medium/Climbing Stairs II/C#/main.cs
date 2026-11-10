// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
public class Solution
{
    public int ClimbStairs(int n, int[] costs)
    {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int d = Math.Min(a + 9, Math.Min(b + 4, c + 1)) + costs[i];
            a = b;
            b = c;
            c = d;
        }
        int ans = c;
        return ans;
    }
}