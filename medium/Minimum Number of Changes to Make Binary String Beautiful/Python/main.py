# Problem: Minimum Number of Changes to Make Binary String Beautiful
# Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
class Solution:
    def minChanges(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        for i in range(1, n, 2):
            if s[i] != s[i - 1]:
                ans += 1
        return ans
