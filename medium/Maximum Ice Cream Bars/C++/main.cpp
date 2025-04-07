// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int ans = 0, sum = 0;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++)
        {
            sum += costs[i];
            if (sum <= coins)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};