// Problem: Number of Sets of K Non-Overlapping Line Segments
// Link to the problem: https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments/
class Solution
{
public:
    long long power(long long b, long long e, const long long m)
    {
        long long ans = 1;
        b %= m;
        while (e > 0)
        {
            if (e & 1)
            {
                ans = ans * b % m;
            }
            b = b * b % m;
            e >>= 1;
        }
        return ans;
    }
    int numberOfSets(int n, int k)
    {
        const int z = 1000000007, m = 2 * k;
        long long x = 1, y = 1;
        for (int i = 1; i <= m; i++)
        {
            x = x * (n + k - i) % z;
            y = y * i % z;
        }
        const int ans = x * power(y, z - 2, z) % z;
        return ans;
    }
};
