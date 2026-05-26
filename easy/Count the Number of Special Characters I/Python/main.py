# Problem: Count the Number of Special Characters I
# Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        lower: List[int] = [0] * 26
        upper: List[int] = [0] * 26
        for c in word:
            if c.islower():
                lower[ord(c) - ord("a")] += 1
            else:
                upper[ord(c) - ord("A")] += 1
        ans: int = 0
        for i in range(0, 26):
            if lower[i] > 0 and upper[i] > 0:
                ans += 1
        return ans
