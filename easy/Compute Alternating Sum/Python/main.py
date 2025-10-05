# Problem: Compute Alternating Sum
# Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        ans: int = 0
        for i in range(0, len(nums)):
            if i % 2 == 0:
                ans += nums[i]
            else:
                ans -= nums[i]
        return ans
