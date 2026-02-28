// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
func concatenatedBinary(n int) int {
	var mod int64 = 1000000007
	var ans int64 = 0
	for i := 1; i <= n; i++ {
		var x int = i
		for x > 0 {
			x /= 2
			ans *= 2
		}
		ans = (ans + int64(i)) % mod
	}
	return int(ans)
}
