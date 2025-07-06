# Problem: Calculate Money in Leetcode Bank
# Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
class Solution:
    def totalMoney(self, n: int) -> int:
        q: int = n // 7
        r: int = n % 7
        ans: int = ((q * (q - 1)) // 2) * 7
        ans += q * 28
        ans += ((r * (r + 1)) // 2) + (q * r)
        return ans
