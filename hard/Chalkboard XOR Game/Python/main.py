# Problem: Chalkboard XOR Game
# Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
class Solution:
    def xorGame(self, nums: List[int]) -> bool:
        total: int = 0
        n: int = len(nums)
        for num in nums:
            total ^= num
        a: bool = total == 0
        b: bool = n % 2 == 0
        ans: bool = a or b
        return ans
