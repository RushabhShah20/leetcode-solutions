# Problem: Maximum Number of Balloons
# Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        n: int = len(text)
        ans: int = 100000
        a: List[int] = [0] * 26
        for i in range(0, n):
            a[ord(text[i]) - ord("a")] += 1
        ans = min(ans, a[1])
        ans = min(ans, a[0])
        ans = min(ans, a[11] // 2)
        ans = min(ans, a[14] // 2)
        ans = min(ans, a[13])
        return ans
