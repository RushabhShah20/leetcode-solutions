// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
public class Solution
{
    public int LongestValidParentheses(string s)
    {
        int n = s.Length, ans = 0, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                x++;
            }
            else
            {
                y++;
            }
            if (x == y)
            {
                ans = Math.Max(ans, x + y);
            }
            else if (y > x)
            {
                x = 0;
                y = 0;
            }
        }
        x = 0;
        y = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '(')
            {
                x++;
            }
            else
            {
                y++;
            }
            if (x == y)
            {
                ans = Math.Max(ans, x + y);
            }
            else if (x > y)
            {
                x = 0;
                y = 0;
            }
        }
        return ans;
    }
}