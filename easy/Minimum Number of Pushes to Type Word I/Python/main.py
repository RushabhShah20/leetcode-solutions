# Problem: Minimum Number of Pushes to Type Word I
# Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
class Solution:
    def minimumPushes(self, word: str) -> int:
        ans: int = 0
        n: int = len(word)
        for i in range(0, n):
            if i < 8:
                ans += 1
            elif i >= 8 and i < 16:
                ans += 2
            elif i >= 16 and i < 24:
                ans += 3
            else:
                ans += 4
        return ans
