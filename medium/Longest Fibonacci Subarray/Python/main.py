# Problem: Longest Fibonacci Subarray
# Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        ans: int = 2
        n: int = len(nums)
        count: int = 2
        for i in range(2, n):
            if nums[i] == nums[i - 1] + nums[i - 2]:
                count += 1
            else:
                ans = max(ans, count)
                count = 2
        ans = max(ans, count)
        return ans
