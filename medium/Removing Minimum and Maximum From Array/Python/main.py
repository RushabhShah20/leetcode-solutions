# Problem: Removing Minimum and Maximum From Array
# Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n: int = len(nums)
        x: int = 0
        y: int = 0
        for i in range(0, n):
            if nums[i] > nums[x]:
                x = i
            elif nums[i] < nums[y]:
                y = i
        a: int = max(x, y) + 1
        b: int = n - min(x, y)
        c: int = (min(x, y) + 1) + (n - max(x, y))
        ans: int = min([a, b, c])
        return ans
