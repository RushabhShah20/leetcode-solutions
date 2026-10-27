// Problem: Find Minimum Log Transportation Cost
// Link to the problem: https://leetcode.com/problems/find-minimum-log-transportation-cost/
class Solution
{
public:
    long long minCuttingCost(int n, int m, int k)
    {
        const long long ans = (long long)max({0, m - k, n - k}) * k;
        return ans;
    }
};