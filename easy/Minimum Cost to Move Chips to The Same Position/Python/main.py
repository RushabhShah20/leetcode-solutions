# Problem: Minimum Cost to Move Chips to The Same Position
# Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        even: int = 0
        odd: int = 0
        for i in position:
            if i % 2 == 0:
                even += 1
            else:
                odd += 1
        ans: int = min(even, odd)
        return ans
