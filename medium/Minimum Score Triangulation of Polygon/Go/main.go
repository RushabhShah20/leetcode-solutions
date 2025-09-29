// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
func minScoreTriangulation(values []int) int {
	var n int = len(values)
	if n == 3 {
		return values[0] * values[1] * values[2]
	}
	var dp [][]int = make([][]int, n-1)
	for i := 0; i < n-1; i++ {
		dp[i] = make([]int, n)
	}
	for x := 2; x <= n-1; x++ {
		for i := 0; i < n-x; i++ {
			var j int = i + x
			var w int = math.MaxInt
			var e int = values[i] * values[j]
			for k := i + 1; k < j; k++ {
				w = min(w, e*values[k]+dp[i][k]+dp[k][j])
			}
			dp[i][j] = w
		}
	}
	return dp[0][n-1]
}
