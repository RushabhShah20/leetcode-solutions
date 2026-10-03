# Problem: Longest Valid Parentheses
# Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
class Solution:
    def longestValidParentheses(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if s[i] == "(":
                x += 1
            else:
                y += 1
            if x == y:
                ans = max(ans, x + y)
            elif y > x:
                x = 0
                y = 0
        x = 0
        y = 0
        for i in range(n - 1, -1, -1):
            if s[i] == "(":
                x += 1
            else:
                y += 1
            if x == y:
                ans = max(ans, x + y)
            elif x > y:
                x = 0
                y = 0
        return ans
