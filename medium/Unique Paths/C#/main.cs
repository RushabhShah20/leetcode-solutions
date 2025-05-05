// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
public class Solution
{
    public int UniquePaths(int m, int n)
    {
        long ans = 1;
        int down_moves = m - 1, right_moves = n - 1;
        int x = Math.Max(down_moves, right_moves), y = Math.Min(down_moves, right_moves);
        for (int i = 1; i <= y; i++)
        {
            ans *= (x + i);
            ans /= i;
        }
        return (int)ans;
    }
}