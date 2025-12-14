# Problem: Absolute Difference Between Maximum and Minimum K Elements
# Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
class Solution:
    def absDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        ans: int = 0
        n: int = len(nums)
        for i in range(0, k):
            ans += -nums[i] + nums[n - i - 1]
        return ans
