// Problem: Sum of K-Digit Numbers in a Range
// Link to the problem: https://leetcode.com/problems/sum-of-k-digit-numbers-in-a-range/
class Solution
{
public:
    long long power(long long b, long long e, const long long m)
    {
        long long x = 1;
        b %= m;
        while (e > 0)
        {
            if (e % 2 == 1)
            {
                x = x * b % m;
            }
            b = b * b % m;
            e /= 2;
        }
        return x;
    }
    int sumOfNumbers(int l, int r, int k)
    {
        const long long m = 1000000007;
        const long long n = r - l + 1, s = (l + r) * n / 2 % m, c = power(n, k - 1, m), y = (power(10, k, m) - 1 + m) % m * power(9, m - 2, m) % m;
        const int ans = (((s * c) % m) * (y % m)) % m;
        return ans;
    }
};