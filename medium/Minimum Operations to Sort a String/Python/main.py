# Problem: Minimum Operations to Sort a String
# Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
class Solution:
    def minOperations(self, s: str) -> int:
        n: int = len(s)
        mn: str = "z"
        mx: str = "a"
        a: bool = True
        for i in range(0, n):
            if mx < s[i]:
                mx = s[i]
            if mn > s[i]:
                mn = s[i]
            if i > 0 and s[i - 1] > s[i]:
                a = False
        if a:
            return 0
        if n == 2:
            return -1
        if s[0] == mn or s[n - 1] == mx:
            return 1
        for i in range(1, n - 1):
            if s[i] == mn or s[i] == mx:
                return 2
        return 3
