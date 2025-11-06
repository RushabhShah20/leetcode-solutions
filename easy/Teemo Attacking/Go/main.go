// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
func findPoisonedDuration(timeSeries []int, duration int) int {
	var ans int = 0
	var n int = len(timeSeries)
	for i := 1; i < n; i++ {
		ans += min(duration, timeSeries[i]-timeSeries[i-1])
	}
	ans += duration
	return ans
}
