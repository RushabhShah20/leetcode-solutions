# Problem: Score of a String
# Link to the problem: https://leetcode.com/problems/score-of-a-string/
class Solution:
    def scoreOfString(self, s: str) -> int:
        ans: int = 0
        for i in range(0, len(s) - 1, 1):
            ans += abs(ord(s[i]) - ord(s[i + 1]))
        return ans
