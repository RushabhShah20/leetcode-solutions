# Problem: Best Time to Buy and Sell Stock
# Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans: int = 0
        minPrice: int = math.inf
        for i in range(0, len(prices), 1):
            minPrice = min(minPrice, prices[i])
            ans = max(ans, prices[i] - minPrice)
        return ans
