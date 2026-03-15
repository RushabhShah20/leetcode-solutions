// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
class Solution
{
public:
    long long countCommas(long long n)
    {
        long long ans = 0;
        long long x = 1000;
        while (x <= n)
        {
            ans += (n - x + 1);
            x *= 1000;
        }
        return ans;
    }
};