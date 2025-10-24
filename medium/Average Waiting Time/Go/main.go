// Problem: Average Waiting Time
// Link to the problem: https://leetcode.com/problems/average-waiting-time/
func averageWaitingTime(customers [][]int) float64 {
	var ans int64 = 0
	var total int64 = 0
	var n int = len(customers)
	total += (int64(customers[0][0]) + int64(customers[0][1]))
	ans += int64(customers[0][1])
	for i := 1; i < n; i++ {
		if total >= int64(customers[i][0]) {
			total += int64(customers[i][1])
			ans += (total - int64(customers[i][0]))
		} else {
			total = int64(customers[i][0]) + int64(customers[i][1])
			ans += int64(customers[i][1])
		}
	}
	return (float64(ans) / float64(n))
}
