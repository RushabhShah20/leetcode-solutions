// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
func minCost(grid [][]int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	var dp [][][]int = make([][][]int, m)
	for i := 0; i < m; i++ {
		dp[i] = make([][]int, n)
		for j := 0; j < n; j++ {
			dp[i][j] = make([]int, 1024)
		}
	}
	dp[0][0][grid[0][0]] = 1
	for i := 1; i < m; i++ {
		for k := 0; k < 1024; k++ {
			if dp[i-1][0][k] == 1 {
				dp[i][0][k^grid[i][0]] = 1
			}
		}
	}
	for j := 1; j < n; j++ {
		for k := 0; k < 1024; k++ {
			if dp[0][j-1][k] == 1 {
				dp[0][j][k^grid[0][j]] = 1
			}
		}
	}
	for i := 1; i < m; i++ {
		for j := 1; j < n; j++ {
			for k := 0; k < 1024; k++ {
				if dp[i-1][j][k] == 1 || dp[i][j-1][k] == 1 {
					dp[i][j][k^grid[i][j]] = 1
				}
			}
		}
	}
	for k := 0; k < 1024; k++ {
		if dp[m-1][n-1][k] == 1 {
			return k
		}
	}
	return 0
}
