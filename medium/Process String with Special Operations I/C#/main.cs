// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
public class Solution
{
    public string ProcessStr(string s)
    {
        int n = s.Length;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '*')
            {
                if (ans.Length > 0)
                {
                    ans.Remove(ans.Length - 1, 1);
                }
            }
            else if (c == '#')
            {
                ans.Append(ans.ToString());
            }
            else if (c == '%')
            {
                char[] arr = ans.ToString().ToCharArray();
                Array.Reverse(arr);
                ans.Clear();
                ans.Append(arr);
            }
            else
            {
                ans.Append(c);
            }
        }
        return ans.ToString();
    }
}