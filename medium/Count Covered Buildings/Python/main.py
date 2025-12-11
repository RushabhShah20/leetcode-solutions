# Problem: Count Covered Buildings
# Link to the problem: https://leetcode.com/problems/count-covered-buildings/
class Solution:
    def countCoveredBuildings(self, n: int, buildings: List[List[int]]) -> int:
        maxRow: List[int] = [0] * (n + 1)
        minRow: List[int] = [n + 1] * (n + 1)
        maxCol: List[int] = [0] * (n + 1)
        minCol: List[int] = [n + 1] * (n + 1)
        for building in buildings:
            x: int = building[0]
            y: int = building[1]
            maxRow[y] = max(maxRow[y], x)
            minRow[y] = min(minRow[y], x)
            maxCol[x] = max(maxCol[x], y)
            minCol[x] = min(minCol[x], y)
        ans: int = 0
        for building in buildings:
            x: int = building[0]
            y: int = building[1]
            if x > minRow[y] and x < maxRow[y] and y > minCol[x] and y < maxCol[x]:
                ans += 1
        return ans
