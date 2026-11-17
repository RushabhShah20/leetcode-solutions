// Problem: Minimum Changes to Make K Semi-palindromes
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-k-semi-palindromes/
func minimumChanges(s string, k int) int {
	var n int = len(s)
	var a [][]int = make([][]int, n)
	for i := 0; i < n; i++ {
		a[i] = make([]int, n)
	}
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			var m int = j - i + 1
			var x int = m
			for p := 1; p < m; p++ {
				if m%p != 0 {
					continue
				}
				var y int = 0
				for q := 0; q < p; q++ {
					var l int = i + q
					var r int = j - p + q + 1
					for l < r {
						if s[l] != s[r] {
							y++
						}
						l += p
						r -= p
					}
				}
				if y < x {
					x = y
				}
			}
			a[i][j] = x
		}
	}
	var dp [][]int = make([][]int, n)
	for i := 0; i < n; i++ {
		dp[i] = make([]int, k+1)
		for t := 0; t <= k; t++ {
			dp[i][t] = n
		}
	}
	for i := 1; i < n; i++ {
		dp[i][1] = a[0][i]
	}
	for i := 0; i < n; i++ {
		for p := 2; p <= k; p++ {
			for j := (p - 1) << 1; j < i; j++ {
				var x int = dp[j-1][p-1] + a[j][i]
				if x < dp[i][p] {
					dp[i][p] = x
				}
			}
		}
	}
	var ans int = dp[n-1][k]
	return ans
}
