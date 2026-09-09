// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
long long countCommas(long long n)
{
    long long ans = 0, x = 1000;
    while (x <= n)
    {
        ans += (n - x + 1);
        x *= 1000;
    }
    return ans;
}