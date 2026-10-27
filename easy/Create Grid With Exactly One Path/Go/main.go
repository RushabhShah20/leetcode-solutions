// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
func createGrid(m int, n int) []string {
	var grid [][]byte = make([][]byte, m)
	for i := 0; i < m; i++ {
		var row []byte = make([]byte, n)
		for j := 0; j < n; j++ {
			row[j] = '#'
		}
		grid[i] = row
	}
	for i := 0; i < n; i++ {
		grid[0][i] = '.'
	}
	for i := 0; i < m; i++ {
		grid[i][n-1] = '.'
	}
	var ans []string = make([]string, m)
	for i := 0; i < m; i++ {
		ans[i] = string(grid[i])
	}
	return ans
}
