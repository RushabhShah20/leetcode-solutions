// Problem: Count Commas in Range
// Link to the problem: https://leetcode.com/problems/count-commas-in-range/
class Solution
{
public:
    int countCommas(int n)
    {
        int ans = 0;
        long long x = 1000;
        while (x <= n)
        {
            ans += (n - x + 1);
            x *= 1000;
        }
        return ans;
    }
};