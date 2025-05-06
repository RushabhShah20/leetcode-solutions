# Problem: Maximum Ice Cream Bars
# Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        ans: int = 0
        sum: int = 0
        costs.sort()
        for i in range(0, len(costs), 1):
            sum += costs[i]
            if sum <= coins:
                ans += 1
            else:
                break
        return ans
