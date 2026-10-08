// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
public class Solution
{
    public string RemoveOuterParentheses(string s)
    {
        int n = s.Length, x = 0;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                x--;
            }
            if (x > 0)
            {
                ans.Append(s[i]);
            }
            if (s[i] == '(')
            {
                x++;
            }
        }
        return ans.ToString();
    }
}