# Problem: Minimum Cost of Buying Candies With Discount
# Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        n: int = len(cost)
        ans: int = 0
        cost.sort()
        for i in range(n - 1, -1, -3):
            if i - 1 >= 0:
                ans += cost[i] + cost[i - 1]
            else:
                ans += cost[i]
        return ans
