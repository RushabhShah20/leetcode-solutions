# Problem: Maximum Number of Operations to Move Ones to the End
# Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
class Solution:
    def maxOperations(self, s: str) -> int:
        ans: int = 0
        n: int = len(s)
        ones: int = 0
        for i in range(0, n):
            if s[i] == "1":
                ones += 1
            elif i > 0 and s[i - 1] == "1":
                ans += ones
        return ans
