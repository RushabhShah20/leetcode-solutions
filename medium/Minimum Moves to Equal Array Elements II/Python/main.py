# Problem: Minimum Moves to Equal Array Elements II
# Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        l: int = 0
        r: int = n - 1
        nums.sort()
        while l <= r:
            ans += nums[r] - nums[l]
            l += 1
            r -= 1
        return ans
