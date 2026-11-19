# Problem: Minimum Score by Changing Two Elements
# Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
class Solution:
    def minimizeSum(self, nums: List[int]) -> int:
        n: int = len(nums)
        mn1: int = 1000000001
        mn2: int = 1000000001
        mn3: int = 1000000001
        mx1: int = 0
        mx2: int = 0
        mx3: int = 0
        for i in range(0, n):
            if mn1 > nums[i]:
                mn3 = mn2
                mn2 = mn1
                mn1 = nums[i]
            elif mn2 > nums[i]:
                mn3 = mn2
                mn2 = nums[i]
            elif mn3 > nums[i]:
                mn3 = nums[i]
            if mx1 < nums[i]:
                mx3 = mx2
                mx2 = mx1
                mx1 = nums[i]
            elif mx2 < nums[i]:
                mx3 = mx2
                mx2 = nums[i]
            elif mx3 < nums[i]:
                mx3 = nums[i]
        a: int = mx3 - mn1
        b: int = mx1 - mn3
        c: int = mx2 - mn2
        ans: int = min(a, min(b, c))
        return ans
