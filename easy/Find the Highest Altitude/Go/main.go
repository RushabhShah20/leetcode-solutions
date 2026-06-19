// Problem: Find the Highest Altitude
// Link to the problem: https://leetcode.com/problems/find-the-highest-altitude/
func largestAltitude(gain []int) int {
	var n int = len(gain)
	var ans int = 0
	var x int = 0
	for i := 0; i < n; i++ {
		x += gain[i]
		ans = max(ans, x)
	}
	return ans
}
