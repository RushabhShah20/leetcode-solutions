// Problem: Count Commas in Range II
// Link to the problem: https://leetcode.com/problems/count-commas-in-range-ii/
func countCommas(n int64) int64 {
	var ans int64 = 0
	var x int64 = 1000
	for x <= n {
		ans += (n - x + 1)
		x *= 1000
	}
	return ans
}
