// Problem: Minimum Cost to Split into Ones
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-split-into-ones/
class Solution
{
public:
    int minCost(int n)
    {
        const int ans = ((n - 1) * (n)) / 2;
        return ans;
    }
};
