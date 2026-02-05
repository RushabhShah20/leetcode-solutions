# Problem: Stone Removal Game
# Link to the problem: https://leetcode.com/problems/stone-removal-game/
class Solution:
    def canAliceWin(self, n: int) -> bool:
        if n >= 10 and n < 19:
            return True
        if n >= 27 and n < 34:
            return True
        if n >= 40 and n < 45:
            return True
        if n >= 49 and n < 52:
            return True
        return False
