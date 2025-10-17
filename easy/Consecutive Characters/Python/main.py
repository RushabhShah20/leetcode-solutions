# Problem: Consecutive Characters
# Link to the problem: https://leetcode.com/problems/consecutive-characters/
class Solution:
    def maxPower(self, s: str) -> int:
        ans: int = 1
        count: int = 1
        for i in range(0, len(s) - 1):
            if s[i] == s[i + 1]:
                count += 1
                ans = max(ans, count)
            else:
                count = 1
        return ans
