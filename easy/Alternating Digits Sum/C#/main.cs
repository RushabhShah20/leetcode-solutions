// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
public class Solution
{
    public List<int> split(int n)
    {
        List<int> res = new List<int>();
        while (n > 0)
        {
            res.Add(n % 10);
            n /= 10;
        }
        return res;
    }
    public int AlternateDigitSum(int n)
    {
        int ans = 0;
        List<int> digits = split(n);
        for (int i = digits.Count - 1; i >= 0; i--)
        {
            if (digits.Count % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    ans += digits[i];
                }
                else
                {
                    ans -= digits[i];
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    ans += digits[i];
                }
                else
                {
                    ans -= digits[i];
                }
            }
        }
        return ans;
    }
}