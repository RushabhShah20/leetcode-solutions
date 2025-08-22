// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
func minimumArea(grid [][]int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	var a int = math.MaxInt32
	var b int = math.MaxInt32
	var c int = math.MinInt32
	var d int = math.MinInt32
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if grid[i][j] == 1 {
				a = min(a, i)
				b = min(b, j)
				c = max(c, i)
				d = max(d, j)
			}
		}
	}
	return (c - a + 1) * (d - b + 1)
}
