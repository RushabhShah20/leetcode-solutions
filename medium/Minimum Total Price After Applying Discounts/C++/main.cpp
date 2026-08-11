// Problem: Minimum Total Price After Applying Discounts
// Link to the problem: https://leetcode.com/problems/minimum-total-price-after-applying-discounts/
class Solution
{
public:
    double minPrice(vector<int> &prices, vector<int> &discounts)
    {
        const int n = prices.size(), m = discounts.size();
        sort(prices.begin(), prices.end(), greater<>());
        sort(discounts.begin(), discounts.end(), greater<>());
        double ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += i < m ? (double)(prices[i] * (100 - discounts[i])) / 100 : prices[i];
        }
        return ans;
    }
};