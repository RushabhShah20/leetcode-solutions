# Problem: Check If It Is a Straight Line
# Link to the problem: https://leetcode.com/problems/check-if-it-is-a-straight-line/
class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        x: bool = True
        for i in range(1, len(coordinates) - 1, 1):
            x1: int = coordinates[i - 1][0]
            x2: int = coordinates[i][0]
            x3: int = coordinates[i + 1][0]
            y1: int = coordinates[i - 1][1]
            y2: int = coordinates[i][1]
            y3: int = coordinates[i + 1][1]
            if (y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1):
                x = False
                break
        return x
