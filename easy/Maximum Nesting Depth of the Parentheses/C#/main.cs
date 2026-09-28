// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
public class Solution
{
    public int MaxDepth(string s)
    {
        int n = s.Length, ans = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                x++;
            }
            if (s[i] == ')')
            {
                x--;
            }
            ans = Math.Max(ans, x);
        }
        return ans;
    }
}