// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
public class Solution
{
    public int MaxDistance(int[] colors)
    {
        int n = colors.Length, ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (colors[i] != colors[j])
                {
                    ans = Math.Max(Math.Abs(i - j), ans);
                }
            }
        }
        return ans;
    }
}