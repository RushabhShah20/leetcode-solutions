# Problem: Maximum Alternating Sum of Squares
# Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        for i in range(0, n):
            nums[i] *= nums[i]
        nums.sort()
        for i in range(0, n):
            if i < (n >> 1):
                ans -= nums[i]
            else:
                ans += nums[i]
        return ans
