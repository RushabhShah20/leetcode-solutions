# Problem: Find Triangular Sum of an Array
# Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        n: int = len(nums)
        for i in range(n - 1, -1, -1):
            for j in range(0, i):
                nums[j] = (nums[j] + nums[j + 1]) % 10
        return nums[0]
