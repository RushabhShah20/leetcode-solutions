# Problem: Find Minimum in Rotated Sorted Array II
# Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
class Solution:
    def findMin(self, nums: List[int]) -> int:
        n: int = len(nums)
        l: int = 0
        r: int = n - 1
        while l <= r:
            m: int = l + (r - l) // 2
            if nums[m] > nums[r]:
                l = m + 1
            elif nums[m] < nums[l]:
                r = m
                l += 1
            else:
                r -= 1
        ans: int = nums[l]
        return ans
