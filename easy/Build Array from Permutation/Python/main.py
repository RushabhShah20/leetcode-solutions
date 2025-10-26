# Problem: Build Array from Permutation
# Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans: List[int] = [0] * len(nums)
        ans[0] = nums[nums[0]]
        for i in range(1, len(nums)):
            ans[i] = nums[nums[i]]
        return ans
