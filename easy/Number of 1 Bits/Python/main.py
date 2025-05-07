# Problem: Number of 1 Bits
# Link to the problem: https://leetcode.com/problems/number-of-1-bits/
class Solution:
    def hammingWeight(self, n: int) -> int:
        ans: int = 0
        while n != 0:
            n &= n - 1
            ans += 1
        return ans
