# Problem: Sum Multiples
# Link to the problem: https://leetcode.com/problems/sum-multiples/
class Solution:
    def sumOfMultiples(self, n: int) -> int:
        ans: int = 0
        for i in range(1, n + 1):
            if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
                ans += i
        return ans
