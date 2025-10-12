# Problem: Equal Score Substrings
# Link to the problem: https://leetcode.com/problems/equal-score-substrings/
class Solution:
    def scoreBalance(self, s: str) -> bool:
        prefix: List[int] = [0] * len(s)
        prefix[0] = (ord(s[0]) - ord("a")) + 1
        for i in range(1, len(s)):
            prefix[i] = prefix[i - 1] + (ord(s[i]) - ord("a") + 1)
        suffix: List[int] = [0] * len(s)
        suffix[len(s) - 1] = (ord(s[len(s) - 1]) - ord("a")) + 1
        for i in range(len(s) - 2, -1, -1):
            suffix[i] = suffix[i + 1] + (ord(s[i]) - ord("a") + 1)
        for i in range(0, len(s) - 1):
            if prefix[i] == suffix[i + 1]:
                return True
        return False
