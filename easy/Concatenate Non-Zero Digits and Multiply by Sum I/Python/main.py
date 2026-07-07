# Problem: Concatenate Non-Zero Digits and Multiply by Sum I
# Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x: int = 0
        y: int = 0
        a: int = 1
        while n > 0:
            z: int = n % 10
            n //= 10
            if z == 0:
                continue
            x = z * a + x
            y += z
            a *= 10
        ans: int = x * y
        return ans
