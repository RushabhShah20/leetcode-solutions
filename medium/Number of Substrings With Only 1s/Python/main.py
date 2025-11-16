# Problem: Number of Substrings With Only 1s
# Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
class Solution:
    def numSub(self, s: str) -> int:
        x: List[int] = []
        y: int = 0
        for i in range(0, len(s)):
            if s[i] == "1":
                y += 1
            else:
                x.append(y)
                y = 0
        if y != 0:
            x.append(y)
        ans: int = 0
        mod: int = 1000000007
        for i in range(0, len(x)):
            ans += (((x[i]) * (x[i] + 1)) // 2) % mod
        return ans
