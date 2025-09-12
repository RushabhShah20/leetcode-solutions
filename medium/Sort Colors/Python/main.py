# Problem: Sort Colors
# Link to the problem: https://leetcode.com/problems/sort-colors/
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeroes: int = 0
        ones: int = 0
        twos: int = 0
        for i in range(0, len(nums)):
            if nums[i] == 0:
                zeroes += 1
            elif nums[i] == 1:
                ones += 1
            else:
                twos += 1
        for i in range(0, len(nums)):
            if zeroes > 0:
                nums[i] = 0
                zeroes -= 1
            elif ones > 0:
                nums[i] = 1
                ones -= 1
            else:
                nums[i] = 2
                twos -= 1
