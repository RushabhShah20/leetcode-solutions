# Problem: Minimum Number of Pushes to Type Word II
# Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
class Solution:
    def minimumPushes(self, word: str) -> int:
        n: int = len(word)
        a: List[int] = [0] * 26
        for i in range(0, n):
            a[ord(word[i]) - ord("a")] += 1
        a.sort(reverse=True)
        ans: int = 0
        for i in range(0, 26):
            if i < 8:
                ans += 1 * a[i]
            elif i >= 8 and i < 16:
                ans += 2 * a[i]
            elif i >= 16 and i < 24:
                ans += 3 * a[i]
            else:
                ans += 4 * a[i]
        return ans
