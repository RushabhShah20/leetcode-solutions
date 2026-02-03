# Problem: Trionic Array I
# Link to the problem: https://leetcode.com/problems/trionic-array-i/
class Solution:
    def isTrionic(self, nums: List[int]) -> bool:
        n: int = len(nums)
        i: int = 0
        p: int = 0
        q: int = 0
        while i < n - 1 and nums[i + 1] > nums[i]:
            i += 1
        p = i
        while i < n - 1 and nums[i + 1] < nums[i]:
            i += 1
        q = i
        while i < n - 1 and nums[i + 1] > nums[i]:
            i += 1
        if i == n - 1:
            if p != 0 and q != 0 and p != n - 1 and q != n - 1:
                return True
            else:
                return False
        return False
