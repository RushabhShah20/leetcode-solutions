// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
public class Solution
{
    public int ConcatenatedBinary(int n)
    {
        long mod = 1000000007, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = i;
            while (x > 0)
            {
                x /= 2;
                ans *= 2;
            }
            ans = (ans + i) % mod;
        }
        return (int)ans;
    }
}