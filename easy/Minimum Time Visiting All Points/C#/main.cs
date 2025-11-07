// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
public class Solution
{
    public int MinTimeToVisitAllPoints(int[][] points)
    {
        int n = points.Length, ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += Math.Max(Math.Abs(points[i - 1][1] - points[i][1]), Math.Abs(points[i - 1][0] - points[i][0]));
        }
        return ans;
    }
}