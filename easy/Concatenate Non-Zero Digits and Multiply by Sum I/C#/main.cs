// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
public class Solution
{
    public long SumAndMultiply(int n)
    {
        long x = 0, y = 0, a = 1;
        while (n > 0)
        {
            long z = n % 10;
            n /= 10;
            if (z == 0)
            {
                continue;
            }
            x = z * a + x;
            y += z;
            a *= 10;
        }
        long ans = x * y;
        return ans;
    }
}