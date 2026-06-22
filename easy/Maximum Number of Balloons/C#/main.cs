// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
public class Solution
{
    public int MaxNumberOfBalloons(string text)
    {
        int n = text.Length;
        int ans = 100000;
        int[] a = new int[26];
        for (int i = 0; i < n; i++)
        {
            a[text[i] - 'a']++;
        }
        ans = Math.Min(ans, a[1]);
        ans = Math.Min(ans, a[0]);
        ans = Math.Min(ans, a[11] / 2);
        ans = Math.Min(ans, a[14] / 2);
        ans = Math.Min(ans, a[13]);
        return ans;
    }
}