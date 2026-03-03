# Problem: Find Kth Bit in Nth Binary String
# Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        if n == 1:
            return "0"
        x: int = (1 << n) - 1
        m: int = x // 2 + 1
        if k == m:
            return "1"
        if k < m:
            return self.findKthBit(n - 1, k)
        if self.findKthBit(n - 1, x - k + 1) == "0":
            return "1"
        return "0"
