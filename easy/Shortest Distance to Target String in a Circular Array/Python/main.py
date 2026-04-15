# Problem: Shortest Distance to Target String in a Circular Array
# Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        n: int = len(words)
        ans: int = n
        for i in range(0, n):
            if words[i] == target:
                x: int = abs(i - startIndex)
                ans = min(ans, min(x, n - x))
        return -1 if ans == n else ans
