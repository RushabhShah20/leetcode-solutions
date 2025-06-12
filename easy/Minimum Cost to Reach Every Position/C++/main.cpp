// Problem: Minimum Cost to Reach Every Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-reach-every-position/
class Solution
{
public:
    vector<int> minCosts(vector<int> &cost)
    {
        vector<int> ans(cost.size(), cost[0]);
        int min_element = ans[0];
        for (int i = 0; i < cost.size(); i++)
        {
            min_element = min(min_element, cost[i]);
            ans[i] = min_element;
        }
        return ans;
    }
};