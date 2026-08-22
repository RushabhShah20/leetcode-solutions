# Problem: Check Divisibility by Digit Sum and Product
# Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
class Solution:
    def checkDivisibility(self, n: int) -> bool:
        x: int = 0
        y: int = 1
        m: int = n
        while m > 0:
            z: int = m % 10
            x += z
            y *= z
            m //= 10
        ans: bool = n % (x + y) == 0
        return ans
