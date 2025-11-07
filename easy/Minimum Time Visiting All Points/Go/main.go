// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
func abs(x int) int {
	if x >= 0 {
		return x
	} else {
		return -x
	}
}
func minTimeToVisitAllPoints(points [][]int) int {
	var n int = len(points)
	var ans int = 0
	for i := 1; i < n; i++ {
		ans += max(
			abs(points[i-1][1]-points[i][1]),
			abs(points[i-1][0]-points[i][0]),
		)
	}
	return ans
}
