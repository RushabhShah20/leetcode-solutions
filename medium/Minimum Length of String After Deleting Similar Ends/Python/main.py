# Problem: Minimum Length of String After Deleting Similar Ends
# Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
class Solution:
    def minimumLength(self, s: str) -> int:
        n: int = len(s)
        i: int = 0
        j: int = n - 1
        while i < j and s[i] == s[j]:
            c: str = s[i]
            while i <= j and s[i] == c:
                i += 1
            while i <= j and s[j] == c:
                j -= 1
        ans: int = j - i + 1
        return ans
