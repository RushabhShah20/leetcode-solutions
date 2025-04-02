// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
class Solution
{
public:
    long long int nInary(long long int n,long long int base)
    {
        long long int result = 0;
        long long int multiplier = 1;
        while (n > 0)
        {
            result += (n % base) * multiplier;
            n /= base;
            multiplier *= 10;
        }
        return result;
    }

    bool isPalindrome(long long int n)
    {
        long long int reversed = 0;
        long long int original = n;
        while (n > 0)
        {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return original == reversed;
    }

    bool isStrictlyPalindromic(int n)
    {
        bool ans = false;
        for (int i = 2; i <= n - 2; i++)
        {
            int num = nInary(n, i);
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
};