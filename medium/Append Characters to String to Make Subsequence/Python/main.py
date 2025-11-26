# Problem: Append Characters to String to Make Subsequence
# Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        ans: int = 0
        i: int = 0
        j: int = 0
        n: int = len(s)
        m: int = len(t)
        while i < n and j < m:
            if s[i] == t[j]:
                j += 1
            i += 1
        ans = m - j
        return ans
