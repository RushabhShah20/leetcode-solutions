# Problem: Find if Digit Game Can Be Won
# Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        x: int = 0
        y: int = 0
        for num in nums:
            if num // 10 == 0:
                x += num
            else:
                y += num
        return x != y
