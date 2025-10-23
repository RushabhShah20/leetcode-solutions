// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
public class Solution
{
    public bool HasSameDigits(string s)
    {
        while (s.Length != 2)
        {
            string t = "";
            for (int i = 0; i < s.Length - 1; i++)
            {
                int x = s[i] - '0';
                int y = s[i + 1] - '0';
                int z = (x + y) % 10;
                char a = (char)(z + '0');
                t += a;
            }
            s = t;
        }
        return s[0] == s[1];
    }
}