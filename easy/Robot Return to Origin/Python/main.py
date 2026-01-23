# Problem: Robot Return to Origin
# Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
class Solution:
    def judgeCircle(self, moves: str) -> bool:
        y: int = 0
        x: int = 0
        for move in moves:
            if move == "U":
                y += 1
            if move == "D":
                y -= 1
            if move == "R":
                x += 1
            if move == "L":
                x -= 1
        ans: bool = x == 0 and y == 0
        return ans
