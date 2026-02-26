# Problem: Number of Steps to Reduce a Number in Binary Representation to One
# Link to the problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
class Solution:
    def numSteps(self, s: str) -> int:
        n: int = len(s)
        ans: int = 0
        x: int = 0
        for i in range(n - 1, 0, -1):
            y: int = ord(s[i]) - ord("0") + x
            if y % 2 == 0:
                ans += 1
            else:
                ans += 2
                x = 1
        ans += x
        return ans
