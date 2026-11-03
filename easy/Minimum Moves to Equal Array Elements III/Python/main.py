# Problem: Minimum Moves to Equal Array Elements III
# Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        n: int = len(nums)
        mx: int = 0
        for i in range(0, n):
            mx = max(mx, nums[i])
        ans: int = 0
        for i in range(0, n):
            ans += mx - nums[i]
        return ans
