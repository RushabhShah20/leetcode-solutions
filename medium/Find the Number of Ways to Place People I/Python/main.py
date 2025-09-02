# Problem: Find the Number of Ways to Place People I
# Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
class Solution:
    def numberOfPairs(self, points: List[List[int]]) -> int:
        ans: int = 0
        for i in range(0, len(points)):
            for j in range(0, len(points)):
                if i != j:
                    x1: int = points[i][0]
                    y1: int = points[i][1]
                    x2: int = points[j][0]
                    y2: int = points[j][1]
                    if (x1 <= x2) and (y1 >= y2):
                        z: bool = True
                        for k in range(0, len(points)):
                            x: int = points[k][0]
                            y: int = points[k][1]
                            if i != k and j != k:
                                if ((x1 <= x) and (x2 >= x)) and (
                                    (y1 >= y) and (y2 <= y)
                                ):
                                    z = False
                                    break
                        if z == True:
                            ans += 1
        return ans
