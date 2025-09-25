// Problem: Triangle
// Link to the problem: https://leetcode.com/problems/triangle/
func minimumTotal(triangle [][]int) int {
	var n int = len(triangle)
	var dp []int = make([]int, n)
	for i := 0; i < n; i++ {
		dp[i] = triangle[n-1][i]
	}
	for i := n - 2; i >= 0; i-- {
		for j := 0; j < len(triangle[i]); j++ {
			dp[j] = triangle[i][j] + min(dp[j], dp[j+1])
		}
	}
	return dp[0]
}
