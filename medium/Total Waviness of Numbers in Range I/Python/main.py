# Problem: Total Waviness of Numbers in Range I
# Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        ans: int = 0
        for i in range(num1, num2 + 1):
            x: str = str(i)
            n: int = len(x)
            for j in range(1, n - 1):
                if x[j] > x[j - 1] and x[j] > x[j + 1]:
                    ans += 1
                if x[j] < x[j - 1] and x[j] < x[j + 1]:
                    ans += 1
        return ans
