# Problem: Is Subsequence
# Link to the problem: https://leetcode.com/problems/is-subsequence/
class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        n: int = len(t)
        m: int = len(s)
        i: int = 0
        j: int = 0
        while i < n and j < m:
            if t[i] == s[j]:
                j += 1
            i += 1
        if j < m:
            return False
        else:
            return True
