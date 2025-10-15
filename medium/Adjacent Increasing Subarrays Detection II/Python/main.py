# Problem: Adjacent Increasing Subarrays Detection II
# Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
class Solution:
    def maxIncreasingSubarrays(self, nums: List[int]) -> int:
        n: int = len(nums)
        prevK: int = 1
        k: int = 1
        res: int = 1
        for i in range(0, n - 1):
            if nums[i + 1] > nums[i]:
                k += 1
            else:
                prevK = k
                k = 1
            res = max(res, min(prevK, k))
            res = max(res, k // 2)
        return res
