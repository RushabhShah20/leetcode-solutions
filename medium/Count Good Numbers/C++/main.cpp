// Problem: Count Good Numbers
// Link to the problem: https://leetcode.com/problems/count-good-numbers/
class Solution
{
public:
    long long modPow(long long base, long long exp, const long long mod)
    {
        long long ans = 1;
        base %= mod;
        while (exp > 0)
        {
            if (exp % 2 != 0)
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n)
    {
        constexpr int mod = 1000000007;
        const long long a = (n + 1) / 2, b = n / 2, p1 = modPow(5, a, mod), p2 = modPow(4, b, mod);
        const int ans = p1 * p2 % mod;
        return ans;
    }
};
