# Problem: Maximum Number of Items From Sale I
# Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
class Solution:
    def maximumSaleItems(self, items: List[List[int]], budget: int) -> int:
        n: int = len(items)
        a = [0] * (budget + 1)
        x: int = 1000000000
        for i in range(0, n):
            y: int = items[i][0]
            z: int = items[i][1]
            x = min(x, z)
            b: int = 0
            for j in range(0, n):
                if items[j][0] % y == 0:
                    b += 1
            for j in range(budget, z - 1, -1):
                a[j] = max(a[j], a[j - z] + b)
        ans: int = 0
        for i in range(0, budget + 1):
            ans = max(ans, a[i] + (budget - i) // x)
        return ans
