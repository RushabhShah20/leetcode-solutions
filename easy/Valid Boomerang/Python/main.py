# Problem: Valid Boomerang
# Link to the problem: https://leetcode.com/problems/valid-boomerang/
class Solution:
    def isBoomerang(self, points: List[List[int]]) -> bool:
        x1: int = points[0][0]
        x2: int = points[1][0]
        x3: int = points[2][0]
        y1: int = points[0][1]
        y2: int = points[1][1]
        y3: int = points[2][1]
        if (
            (x1 == x2 and y1 == y2)
            or (x2 == x3 and y2 == y3)
            or (x3 == x1 and y3 == y1)
        ):
            return False
        else:
            if (y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1):
                return True
            else:
                return False
