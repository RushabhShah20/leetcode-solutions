# Problem: Two Furthest Houses With Different Colors
# Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        n: int = len(colors)
        ans: int = 0
        for i in range(0, n):
            for j in range(i + 1, n):
                if colors[i] != colors[j]:
                    ans = max(abs(i - j), ans)
        return ans
