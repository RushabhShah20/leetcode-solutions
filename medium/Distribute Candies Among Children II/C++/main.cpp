// Problem: Distribute Candies Among Children II
// Link to the problem: https://leetcode.com/problems/distribute-candies-among-children-ii/
class Solution
{
public:
    long long sum(const long long n)
    {
        const long long ans = n < 0 ? 0 : ((n + 1) * (n + 2)) >> 1;
        return ans;
    }
    long long distributeCandies(int n, int limit)
    {
        const long long ans = sum(n) - 3 * sum(n - limit - 1) + 3 * sum(n - 2 * limit - 2) - sum(n - 3 * limit - 3);
        return ans;
    }
};