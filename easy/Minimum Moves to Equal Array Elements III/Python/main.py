# Problem: Minimum Moves to Equal Array Elements III
# Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        ans: int = 0
        x: int = max(nums)
        for num in nums:
            ans += x - num
        return ans
