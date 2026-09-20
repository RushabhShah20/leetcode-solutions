# Problem: Reverse Degree of a String
# Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
class Solution:
    def reverseDegree(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        for i in range(0, n):
            ans += (26 - (ord(s[i]) - ord("a"))) * (i + 1)
        return ans
