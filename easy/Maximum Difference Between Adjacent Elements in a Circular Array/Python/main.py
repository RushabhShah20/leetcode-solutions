# Problem: Maximum Difference Between Adjacent Elements in a Circular Array
# Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(1, len(nums)):
            ans = max(abs(nums[i] - nums[i - 1]), ans)
        ans = max(abs(nums[len(nums) - 1] - nums[0]), ans)
        return ans
