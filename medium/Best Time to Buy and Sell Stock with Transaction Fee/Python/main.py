# Problem: Best Time to Buy and Sell Stock with Transaction Fee
# Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
class Solution:
    def maxProfit(self, prices: List[int], fee: int) -> int:
        buy: int = -50001
        sell: int = 0
        for price in prices:
            buy = max(buy, sell - price)
            sell = max(sell, buy + price - fee)
        ans: int = sell
        return ans
