// Problem: Buy Two Chocolates
// Link to the problem: https://leetcode.com/problems/buy-two-chocolates/
class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int x = *min_element(prices.begin(), prices.end());
        prices.erase(min_element(prices.begin(), prices.end()));
        int y = *min_element(prices.begin(), prices.end());
        return ((x + y <= money) ? (money - (x + y)) : (money));
    }
};