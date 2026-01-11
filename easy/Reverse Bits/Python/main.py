# Problem: Reverse Bits
# Link to the problem: https://leetcode.com/problems/reverse-bits/
class Solution:
    def reverseBits(self, n: int) -> int:
        ans: int = 0
        for i in range(0, 32):
            ans <<= 1
            ans |= n & 1
            n >>= 1
        return ans
