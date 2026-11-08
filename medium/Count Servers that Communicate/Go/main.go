// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
func countServers(grid [][]int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	var rows []int = make([]int, m)
	var cols []int = make([]int, n)
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if grid[i][j] == 1 {
				rows[i]++
				cols[j]++
			}
		}
	}
	var ans int = 0
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if grid[i][j] == 1 {
				if rows[i] > 1 || cols[j] > 1 {
					ans++
				}
			}
		}
	}
	return ans
}
