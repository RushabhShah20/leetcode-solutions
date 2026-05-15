# Problem: Find Minimum in Rotated Sorted Array
# Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution:
    def findMin(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = 5001
        l: int = 0
        r: int = n - 1
        while l <= r:
            m: int = l + (r - l) // 2
            if nums[l] <= nums[m]:
                ans = min(ans, nums[l])
                l = m + 1
            else:
                r = m - 1
                ans = min(ans, nums[m])
        return ans
