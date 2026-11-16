# Problem: Calculate Digit Sum of a String
# Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s) > k:
            t: list[str] = []
            n: int = len(s)
            for i in range(0, n, k):
                x: int = 0
                for j in range(i, min(i + k, n)):
                    x += int(s[j])
                t.append(str(x))
            s = "".join(t)
        return s
