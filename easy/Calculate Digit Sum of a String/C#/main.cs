// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
public class Solution
{
    public string DigitSum(string s, int k)
    {
        while (s.Length > k)
        {
            StringBuilder t = new StringBuilder();
            int n = s.Length;
            for (int i = 0; i < n; i += k)
            {
                int x = 0;
                for (int j = i; j < Math.Min(i + k, n); ++j)
                {
                    x += s[j] - '0';
                }
                t.Append(x);
            }
            s = t.ToString();
        }
        return s;
    }
}