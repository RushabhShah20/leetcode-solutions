# Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
# Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        n: int = len(nums)
        a: int = 1
        b: int = 1
        c: int = 1
        d: int = 1
        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                c += 1
                a = max(a, c)
                d = 1
            elif nums[i] < nums[i - 1]:
                d += 1
                b = max(b, d)
                c = 1
            else:
                c = 1
                d = 1
        ans: int = max(a, b)
        return ans
