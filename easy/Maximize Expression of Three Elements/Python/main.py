# Problem: Maximize Expression of Three Elements
# Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
class Solution:
    def maximizeExpressionOfThree(self, nums: List[int]) -> int:
        n: int = len(nums)
        nums.sort()
        return nums[n - 1] + nums[n - 2] - nums[0]
