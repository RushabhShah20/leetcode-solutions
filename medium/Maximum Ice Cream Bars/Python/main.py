# Problem: Maximum Ice Cream Bars
# Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        n: int = len(costs)
        mx: int = 0
        for i in range(0, n):
            mx = max(mx, costs[i])
        a: List[int] = [0] * (mx + 1)
        for i in range(0, n):
            a[costs[i]] += 1
        ans: int = 0
        for i in range(1, mx + 1):
            if a[i] == 0:
                continue
            if coins < i:
                break
            x: int = min(a[i], coins / i)
            coins -= i * x
            ans += x
        return ans
