# Problem: Search Insert Position
# Link to the problem: https://leetcode.com/problems/search-insert-position/
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n: int = len(nums)
        l: int = 0
        r: int = n - 1
        while l <= r:
            m: int = (l + r) // 2
            if nums[m] == target:
                return m
            if nums[m] < target:
                l = m + 1
            else:
                r = m - 1
        return l
