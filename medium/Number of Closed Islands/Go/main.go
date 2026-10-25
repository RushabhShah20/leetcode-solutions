// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
func dfs(x int, y int, n int, m int, grid [][]int) bool {
	if x < 0 || x >= n || y < 0 || y >= m {
		return false
	}
	if grid[x][y] == 1 {
		return true
	}
	grid[x][y] = 1
	var a bool = dfs(x-1, y, n, m, grid)
	var b bool = dfs(x+1, y, n, m, grid)
	var c bool = dfs(x, y-1, n, m, grid)
	var d bool = dfs(x, y+1, n, m, grid)
	var ans bool = a && b && c && d
	return ans
}
func closedIsland(grid [][]int) int {
	var n int = len(grid)
	var m int = len(grid[0])
	var ans int = 0
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if grid[i][j] == 0 {
				if dfs(i, j, n, m, grid) {
					ans++
				}
			}
		}
	}
	return ans
}
