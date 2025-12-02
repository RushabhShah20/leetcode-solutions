// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int buy = -50001, sell = 0;
        for (const int price : prices)
        {
            buy = max(buy, sell - price);
            sell = max(sell, buy + price - fee);
        }
        const int ans = sell;
        return ans;
    }
};