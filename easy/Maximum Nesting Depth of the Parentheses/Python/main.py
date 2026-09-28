# Problem: Maximum Nesting Depth of the Parentheses
# Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution:
    def maxDepth(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        x: int = 0
        for i in range(0, n):
            if s[i] == "(":
                x += 1
            if s[i] == ")":
                x -= 1
            ans = max(ans, x)
        return ans
