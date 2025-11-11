// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
func findMaxForm(strs []string, m int, n int) int {
	var dp [][]int = make([][]int, m+1)
	for i := 0; i <= m; i++ {
		dp[i] = make([]int, n+1)
	}
	for _, str := range strs {
		var zeroes int = 0
		var ones int = 0
		for _, ch := range str {
			if ch == '0' {
				zeroes++
			} else {
				ones++
			}
		}
		for i := m; i >= zeroes; i-- {
			for j := n; j >= ones; j-- {
				dp[i][j] = max(dp[i][j], 1+dp[i-zeroes][j-ones])
			}
		}
	}
	return dp[m][n]
}
