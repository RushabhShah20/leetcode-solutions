# Problem: Minimum Add to Make Parentheses Valid
# Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        n: int = len(s)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if s[i] == "(":
                x += 1
            else:
                if x > 0:
                    x -= 1
                else:
                    y += 1
        ans: int = x + y
        return ans
