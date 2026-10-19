# Problem: Find Target Indices After Sorting Array
# Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        n: int = len(nums)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if nums[i] < target:
                x += 1
            elif nums[i] == target:
                y += 1
        ans: list[int] = []
        for i in range(x, x + y):
            ans.append(i)
        return ans
