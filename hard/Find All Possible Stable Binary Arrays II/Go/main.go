// Problem: Find All Possible Stable Binary Arrays II
// Link to the problem: https://leetcode.com/problems/find-all-possible-stable-binary-arrays-ii/
func numberOfStableArrays(zero int, one int, limit int) int {
	var mod int64 = 1000000007
	var dp [][][2]int64 = make([][][2]int64, zero+1)
	for i := range dp {
		dp[i] = make([][2]int64, one+1)
	}
	for i := 0; i <= min(zero, limit); i++ {
		dp[i][0][0] = 1
	}
	for j := 0; j <= min(one, limit); j++ {
		dp[0][j][1] = 1
	}
	for i := 1; i <= zero; i++ {
		for j := 1; j <= one; j++ {
			if i > limit {
				dp[i][j][0] = (dp[i-1][j][0] + dp[i-1][j][1] - dp[i-limit-1][j][1]) % mod
			} else {
				dp[i][j][0] = (dp[i-1][j][0] + dp[i-1][j][1]) % mod
			}
			dp[i][j][0] = (dp[i][j][0] + mod) % mod
			if j > limit {
				dp[i][j][1] = (dp[i][j-1][0] + dp[i][j-1][1] - dp[i][j-limit-1][0]) % mod
			} else {
				dp[i][j][1] = (dp[i][j-1][0] + dp[i][j-1][1]) % mod
			}
			dp[i][j][1] = (dp[i][j][1] + mod) % mod
		}
	}
	var ans int = int((dp[zero][one][0] + dp[zero][one][1]) % mod)
	return ans
}
