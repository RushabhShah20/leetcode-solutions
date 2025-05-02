# Problem: Majority Element
# Link to the problem: https://leetcode.com/problems/majority-element/
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        element: int = -1
        count: int = 0
        for i in range(0, len(nums), 1):
            if count == 0:
                element = nums[i]
            count += 1 if element == nums[i] else -1
        return element
