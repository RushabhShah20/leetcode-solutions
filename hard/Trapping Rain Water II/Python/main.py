# Problem: Trapping Rain Water II
# Link to the problem: https://leetcode.com/problems/trapping-rain-water-ii/
class Solution:
    def trapRainWater(self, heightMap: List[List[int]]) -> int:
        m: int = len(heightMap)
        n: int = len(heightMap[0])
        vols: List[List[int]] = [
            [0] * (len(heightMap[0])) for _ in range(len(heightMap))
        ]
        for i in range(0, m):
            for j in range(0, n):
                vols[i][j] = heightMap[i][j]
        upt: bool = True
        init: bool = True
        while upt:
            upt = False
            for i in range(1, m - 1):
                for j in range(1, n - 1):
                    val: int = max(heightMap[i][j], min(vols[i - 1][j], vols[i][j - 1]))
                    if init or vols[i][j] > val:
                        vols[i][j] = val
                        upt = True
            init = False
            for i in range(m - 2, 0, -1):
                for j in range(n - 2, 0, -1):
                    val: int = max(heightMap[i][j], min(vols[i + 1][j], vols[i][j + 1]))
                    if vols[i][j] > val:
                        vols[i][j] = val
                        upt = True
        ans: int = 0
        for i in range(1, m - 1):
            for j in range(1, n - 1):
                if vols[i][j] > heightMap[i][j]:
                    ans += vols[i][j] - heightMap[i][j]
        return ans
