# Problem: Check if All A's Appears Before All B's
# Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
class Solution:
    def checkString(self, s: str) -> bool:
        ans: bool = True
        count: int = 0
        for i in range(0, len(s), 1):
            if s[i] == "b":
                ans = True
                count = 1
            if s[i] == "a" and count == 1:
                ans = False
                break
        return ans
