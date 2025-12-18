// Problem: Best Time to Buy and Sell Stock using Strategy
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-using-strategy/
class Solution
{
public:
    long long maxProfit(vector<int> &prices, vector<int> &strategy, int k)
    {
        int n = prices.size();
        vector<long long> x(n + 1, 0), y(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            x[i + 1] = x[i] + ((long long)(prices[i]) * (long long)(strategy[i]));
            y[i + 1] = y[i] + prices[i];
        }
        long long ans = x[n];
        for (int i = k - 1; i < n; i++)
        {
            long long a = x[i - k + 1], b = x[n] - x[i + 1], c = y[i + 1] - y[i - (k / 2) + 1];
            ans = max(ans, a + b + c);
        }
        return ans;
    }
};