# Problem: Array Partition
# Link to the problem: https://leetcode.com/problems/array-partition/
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        ans: int = 0
        nums.sort()
        for i in range(0, len(nums), 2):
            ans += nums[i]
        return ans
