# Problem: Number of Smooth Descent Periods of a Stock
# Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
class Solution:
    def getDescentPeriods(self, prices: List[int]) -> int:
        ans: int = 0
        count: int = 1
        a: List[int] = []
        for i in range(1, len(prices)):
            if prices[i] == prices[i - 1] - 1:
                count += 1
            else:
                a.append(count)
                count = 1
        a.append(count)
        for i in range(0, len(a)):
            ans += (a[i]) * (a[i] + 1) // 2
        return ans
