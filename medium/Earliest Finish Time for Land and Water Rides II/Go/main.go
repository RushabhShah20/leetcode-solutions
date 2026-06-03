// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
func solve(n int, m int, a1 []int, d1 []int, a2 []int, d2 []int) int {
	var x int = math.MaxInt
	for i := 0; i < n; i++ {
		x = min(x, a1[i]+d1[i])
	}
	var y int = math.MaxInt
	for i := 0; i < m; i++ {
		y = min(y, max(a2[i], x)+d2[i])
	}
	return y
}
func earliestFinishTime(landStartTime []int, landDuration []int, waterStartTime []int, waterDuration []int) int {
	var n int = len(landDuration)
	var m int = len(waterDuration)
	var x int = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration)
	var y int = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration)
	var ans int = min(x, y)
	return ans
}
