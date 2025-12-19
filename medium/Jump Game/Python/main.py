# Problem: Jump Game
# Link to the problem: https://leetcode.com/problems/jump-game/
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n: int = len(nums)
        x: int = 0
        for i in range(0, n):
            if i > x:
                return False
            x = max(x, i + nums[i])
        return True
