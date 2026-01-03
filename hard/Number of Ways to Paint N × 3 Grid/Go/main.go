// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
func numOfWays(n int) int {
	var mod int64 = 1000000007
	var a int64 = 6
	var b int64 = 6
	for i := 1; i < n; i++ {
		var x int64 = ((3 * a) + (2 * b)) % mod
		var y int64 = ((2 * a) + (2 * b)) % mod
		a = x
		b = y
	}
	var ans int = int((a + b) % mod)
	return ans
}
