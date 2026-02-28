# Problem: Concatenation of Consecutive Binary Numbers
# Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
class Solution:
    def concatenatedBinary(self, n: int) -> int:
        mod: int = 1000000007
        ans: int = 0
        for i in range(1, n + 1):
            x: int = i
            while x > 0:
                x //= 2
                ans *= 2
            ans = (ans + i) % mod
        return ans
