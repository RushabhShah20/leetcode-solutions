# Problem: Minimum Moves to Equal Array Elements
# Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
class Solution:
    def minMoves(self, nums: list[int]) -> int:
        n: int = len(nums)
        ans: int = 0
        mn: int = 1000000001
        for i in range(0, n):
            mn = min(mn, nums[i])
        for i in range(0, n):
            ans += nums[i] - mn
        return ans
