# Problem: Valid Parenthesis String
# Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
class Solution:
    def checkValidString(self, s: str) -> bool:
        n: int = len(s)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if s[i] == "(" or s[i] == "*":
                x += 1
            else:
                x -= 1
            if s[n - 1 - i] == ")" or s[n - 1 - i] == "*":
                y += 1
            else:
                y -= 1
            if x < 0 or y < 0:
                return False
        return True
