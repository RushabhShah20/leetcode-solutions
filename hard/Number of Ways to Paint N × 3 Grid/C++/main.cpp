// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
class Solution
{
public:
    int numOfWays(int n)
    {
        const long long mod = 1000000007;
        long long a = 6, b = 6;
        for (int i = 1; i < n; i++)
        {
            const long long x = ((3 * a) + (2 * b)) % mod;
            const long long y = ((2 * a) + (2 * b)) % mod;
            a = x;
            b = y;
        }
        const int ans = (a + b) % mod;
        return ans;
    }
};