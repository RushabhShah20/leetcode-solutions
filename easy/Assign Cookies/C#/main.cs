// Problem: Assign Cookies
// Link to the problem: https://leetcode.com/problems/assign-cookies/
public class Solution
{
    public int FindContentChildren(int[] g, int[] s)
    {
        Array.Sort(g);
        Array.Sort(s);
        int i = 0, j = 0, ans = 0, n = g.Length, m = s.Length;
        while (j < m && i < n)
        {
            if (g[i] <= s[j])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
}