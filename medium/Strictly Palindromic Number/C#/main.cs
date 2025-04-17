// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
public class Solution
{
    public long nInary(long n, long b)
    {
        long res = 0;
        long mul = 1;
        while (n > 0)
        {
            res += (n % b) * mul;
            n /= b;
            mul *= 10;
        }
        return res;
    }

    public bool isPalindrome(long n)
    {
        long rev = 0;
        long org = n;
        while (n > 0)
        {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return org == rev;
    }
    public bool IsStrictlyPalindromic(int n)
    {
        long x = n;
        bool ans = false;
        for (long i = 2; i <= n - 2; i++)
        {
            long num = nInary(x, i);
            if (isPalindrome(num))
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
}