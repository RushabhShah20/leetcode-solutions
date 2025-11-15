# Problem: Find Numbers with Even Number of Digits
# Link to the problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums)):
            n: int = nums[i]
            count: int = 0
            while n != 0:
                count += 1
                n //= 10
            if count % 2 == 0:
                ans += 1
        return ans
