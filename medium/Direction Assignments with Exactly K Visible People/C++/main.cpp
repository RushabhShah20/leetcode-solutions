// Problem: Direction Assignments with Exactly K Visible People
// Link to the problem: https://leetcode.com/problems/direction-assignments-with-exactly-k-visible-people/
class Solution
{
public:
    long long power(long long b, long long e)
    {
        long long ans = 1;
        b %= 1000000007;
        while (e > 0)
        {
            if (e % 2 == 1)
            {
                ans = (ans * b) % 1000000007;
            }
            b = (b * b) % 1000000007;
            e /= 2;
        }
        return ans;
    }

    long long inv(const long long n)
    {
        return power(n, 1000000007 - 2);
    }

    int countVisiblePeople(int n, int pos, int k)
    {
        if (k > n - 1)
        {
            return 0;
        }
        const int mod = 1000000007;
        vector<long long> a(n);
        a[0] = 1;
        for (int i = 1; i < n; i++)
        {
            a[i] = (a[i - 1] * i) % mod;
        }
        const long long num = a[n - 1], den = (a[k] * a[n - 1 - k]) % mod, combinations = (num * inv(den)) % mod;
        const long long ans = (combinations * 2) % mod;
        return ans;
    }
};