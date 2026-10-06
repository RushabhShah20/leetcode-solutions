// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
public class Solution
{
    public int MinAddToMakeValid(string s)
    {
        int n = s.Length, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                x++;
            }
            else
            {
                if (x > 0) { x--; } else { y++; }
            }
        }
        const int ans = x + y;
        return ans;
    }
}