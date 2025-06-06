# Problem: Average Value of Even Numbers That Are Divisible by Three
# Link to the problem: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
class Solution:
    def averageValue(self, nums: List[int]) -> int:
        sum: int = 0
        s: int = 0
        for i in nums:
            if i % 6 == 0:
                sum = sum + i
                s += 1
        if s == 0:
            return 0
        else:
            return sum // s
