// Problem: Count Islands With Total Value Divisible by K
// Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
func dfs(x int, y int, n int, m int, grid [][]int) int64 {
	var z int64 = int64(grid[x][y])
	grid[x][y] = 0
	var a []int = []int{-1, 0, 1, 0}
	var b []int = []int{0, 1, 0, -1}
	for i := 0; i < 4; i++ {
		var c int = x + a[i]
		var d int = y + b[i]
		if c >= 0 && c < n && d >= 0 && d < m && grid[c][d] > 0 {
			z += dfs(c, d, n, m, grid)
		}
	}
	return z
}
func countIslands(grid [][]int, k int) int {
	var n int = len(grid)
	var m int = len(grid[0])
	var ans int = 0
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if grid[i][j] > 0 && dfs(i, j, n, m, grid)%int64(k) == 0 {
				ans++
			}
		}
	}
	return ans
}
