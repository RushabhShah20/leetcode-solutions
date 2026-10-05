# Problem: Score of Parentheses
# Link to the problem: https://leetcode.com/problems/score-of-parentheses/
class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        x: int = 0
        for i in range(0, n):
            if s[i] == "(":
                x += 1
            else:
                x -= 1
                if s[i - 1] == "(":
                    ans += 1 << x
        return ans
