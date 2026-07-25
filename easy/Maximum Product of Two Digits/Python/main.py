# Problem: Maximum Produdct of Two Digits
# Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
class Solution:
    def maxProduct(self, n: int) -> int:
        x: int = 0
        y: int = 0
        while n > 0:
            k: int = n % 10
            if k > x:
                y = x
                x = k
            elif k > y:
                y = k
            n //= 10
        ans: int = x * y
        return ans
