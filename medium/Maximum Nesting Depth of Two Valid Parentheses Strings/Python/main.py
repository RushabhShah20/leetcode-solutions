# Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
# Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution:
    def maxDepthAfterSplit(self, seq: str) -> list[int]:
        n: int = len(seq)
        ans: list[int] = [0] * n
        for i in range(0, n):
            ans[i] = (i & 1) ^ (1 if seq[i] == "(" else 0)
        return ans
