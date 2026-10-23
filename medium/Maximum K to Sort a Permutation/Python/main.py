# Problem: Maximum K to Sort a Permutation
# Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
class Solution:
    def sortPermutation(self, nums: List[int]) -> int:
        n: int = len(nums)
        ans: int = -1
        for i in range(0, n):
            if nums[i] != i:
                ans &= nums[i]
        if ans == -1:
            return 0
        else:
            return ans
