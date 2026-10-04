// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
public class Solution
{
    public bool CheckValidString(string s)
    {
        int n = s.Length, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '*')
            {
                x++;
            }
            else
            {
                x--;
            }
            if (s[n - 1 - i] == ')' || s[n - 1 - i] == '*')
            {
                y++;
            }
            else
            {
                y--;
            }
            if (x < 0 || y < 0)
            {
                return false;
            }
        }
        return true;
    }
}