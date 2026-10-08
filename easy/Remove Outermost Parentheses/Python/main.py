# Problem: Remove Outermost Parentheses
# Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        n: int = len(s)
        x: int = 0
        ans: list[str] = []
        for i in range(0, n):
            if s[i] == ")":
                x -= 1
            if x > 0:
                ans.append(s[i])
            if s[i] == "(":
                x += 1
        return "".join(ans)
