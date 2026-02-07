# Problem: Minimum Deletions to Make String Balanced
# Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
class Solution:
    def minimumDeletions(self, s: str) -> int:
        ans: int = 0
        count: int = 0
        for c in s:
            if c == "b":
                count += 1
            else:
                ans = min(ans + 1, count)
        return ans
