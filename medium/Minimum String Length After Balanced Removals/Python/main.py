# Problem: Minimum String Length After Balanced Removals
# Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
class Solution:
    def minLengthAfterRemovals(self, s: str) -> int:
        ans: int = 0
        for c in s:
            ans += 1 if c == "a" else -1
        return abs(ans)
