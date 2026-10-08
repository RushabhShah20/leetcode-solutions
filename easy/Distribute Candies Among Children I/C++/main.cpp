// Problem: Distribute Candies Among Children I
// Link to the problem: https://leetcode.com/problems/distribute-candies-among-children-i/
class Solution
{
public:
    int sum(const int n)
    {
        const int ans = n < 0 ? 0 : ((n + 1) * (n + 2)) >> 1;
        return ans;
    }
    int distributeCandies(int n, int limit)
    {
        const int ans = sum(n) - 3 * sum(n - limit - 1) + 3 * sum(n - 2 * limit - 2) - sum(n - 3 * limit - 3);
        return ans;
    }
};