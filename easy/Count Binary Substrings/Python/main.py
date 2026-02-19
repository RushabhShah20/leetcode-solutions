# Problem: Count Binary Substrings
# Link to the problem: https://leetcode.com/problems/count-binary-substrings/
class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        prev: int = 0
        curr: int = 1
        for i in range(1, n):
            if s[i - 1] != s[i]:
                ans += min(prev, curr)
                prev = curr
                curr = 1
            else:
                curr += 1
        ans += min(prev, curr)
        return ans
