# Problem: Number of Strings That Appear as Substrings in Word
# Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        n: int = len(patterns)
        ans: int = 0
        for i in range(0, n):
            if patterns[i] in word:
                ans += 1
        return ans
