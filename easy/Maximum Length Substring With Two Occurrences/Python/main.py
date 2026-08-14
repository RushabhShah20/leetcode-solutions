# Problem: Maximum Length Substring With Two Occurrences
# Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        n: int = len(s)
        i: int = 0
        j: int = 0
        ans: int = 0
        a: List[int] = [0] * 26
        while j < n:
            a[ord(s[j]) - ord("a")] += 1
            while a[ord(s[j]) - ord("a")] > 2 and i < n:
                a[ord(s[i]) - ord("a")] -= 1
                i += 1
            ans = max(ans, j - i + 1)
            j += 1
        return ans
