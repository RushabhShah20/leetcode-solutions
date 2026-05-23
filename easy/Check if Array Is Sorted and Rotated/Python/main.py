# Problem: Check if Array Is Sorted and Rotated
# Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution:
    def check(self, nums: List[int]) -> bool:
        n: int = len(nums)
        x: int = 0
        for i in range(0, n):
            if nums[i] > nums[(i + 1) % n]:
                x += 1
            if x > 1:
                return False
        return True
