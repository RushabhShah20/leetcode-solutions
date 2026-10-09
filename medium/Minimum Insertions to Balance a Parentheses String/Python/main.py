# Problem: Minimum Insertions to Balance a Parentheses String
# Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
class Solution:
    def minInsertions(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        x: int = 0
        for i in range(0, n):
            if s[i] == "(":
                if (x & 1) == 1:
                    ans += 1
                    x += 1
                else:
                    x += 2
            elif x == 0:
                ans += 1
                x = 1
            else:
                x -= 1
        ans += x
        return ans
