# Problem: Count Unguarded Cells in the Grid
# Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
class Solution:
    def countUnguarded(
        self, m: int, n: int, guards: List[List[int]], walls: List[List[int]]
    ) -> int:
        grid: List[List[int]] = [[0 for _ in range(n)] for _ in range(m)]
        for wall in walls:
            grid[wall[0]][wall[1]] = 2
        for guard in guards:
            grid[guard[0]][guard[1]] = 2
        dr: List[int] = [-1, 0, 1, 0]
        dc: List[int] = [0, 1, 0, -1]
        for guard in guards:
            gr: int = guard[0]
            gc: int = guard[1]
            for i in range(0, 4):
                r: int = gr + dr[i]
                c: int = gc + dc[i]
                while r >= 0 and r < m and c >= 0 and c < n and grid[r][c] < 2:
                    grid[r][c] = 1
                    r += dr[i]
                    c += dc[i]
        ans: int = 0
        for i in range(0, m):
            for j in range(0, n):
                if grid[i][j] == 0:
                    ans += 1
        return ans
