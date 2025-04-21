# Problem: Final Array State After K Multiplication Operations I
# Link to the problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for i in range(k):
            min_element: int = min(nums)
            index: int = nums.index(min_element)
            nums[index] = min_element * multiplier
        return nums
