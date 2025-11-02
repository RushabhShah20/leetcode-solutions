// Problem: Count Unguarded Cells in the Grid
// Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
func countUnguarded(m int, n int, guards [][]int, walls [][]int) int {
	var grid [][]int = make([][]int, m)
	for i := 0; i < m; i++ {
		grid[i] = make([]int, n)
	}
	for _, wall := range walls {
		grid[wall[0]][wall[1]] = 2
	}
	for _, guard := range guards {
		grid[guard[0]][guard[1]] = 2
	}
	var dr []int = []int{-1, 0, 1, 0}
	var dc []int = []int{0, 1, 0, -1}
	for _, guard := range guards {
		var gr int = guard[0]
		var gc int = guard[1]
		for i := 0; i < 4; i++ {
			var r int = gr + dr[i]
			var c int = gc + dc[i]
			for r >= 0 && r < m && c >= 0 && c < n && grid[r][c] < 2 {
				grid[r][c] = 1
				r += dr[i]
				c += dc[i]
			}
		}
	}
	var ans int = 0
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if grid[i][j] == 0 {
				ans++
			}
		}
	}
	return ans
}
