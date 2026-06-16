# Problem: Process String with Special Operations I
# Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
class Solution:
    def processStr(self, s: str) -> str:
        ans: str = ""
        for c in s:
            if c == "*":
                ans = ans[:-1]
            elif c == "#":
                ans += ans
            elif c == "%":
                ans = ans[::-1]
            else:
                ans += c
        return ans
