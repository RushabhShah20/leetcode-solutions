// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            ans = max(ans, prices[i] - minPrice);
        }
        return ans;
    }
};