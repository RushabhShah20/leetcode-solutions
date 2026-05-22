# Problem: Search in Rotated Sorted Array
# Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n: int = len(nums)
        l: int = 0
        r: int = n - 1
        while l <= r:
            m: int = l + (r - l) // 2
            if nums[m] == target:
                return m
            if nums[m] >= nums[l]:
                if nums[l] <= target and target < nums[m]:
                    r = m - 1
                else:
                    l = m + 1
            else:
                if nums[m] < target and nums[r] >= target:
                    l = m + 1
                else:
                    r = m - 1
        return -1
