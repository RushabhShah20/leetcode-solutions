# Problem: Minimize Maximum Pair Sum in Array
# Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        n: int = len(nums)
        nums.sort()
        l: int = 0
        r: int = n - 1
        ans: int = 0
        while l < r:
            ans = max(ans, nums[l] + nums[r])
            l += 1
            r -= 1
        return ans
