# Problem: Final Prices With a Special Discount in a Shop
# Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        ans: List[int] = [0] * len(prices)
        for i in range(0, len(prices)):
            ans[i] = prices[i]
            for j in range(i + 1, len(prices)):
                if prices[j] <= prices[i]:
                    ans[i] = prices[i] - prices[j]
                    break
        return ans
