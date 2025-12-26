// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
func bestClosingTime(customers string) int {
	var n int = len(customers)
	var minPenalty int = 0
	var currPenalty int = 0
	var ans int = 0
	for i := 0; i < n; i++ {
		if customers[i] == 'Y' {
			currPenalty--
		} else {
			currPenalty++
		}
		if currPenalty < minPenalty {
			minPenalty = currPenalty
			ans = i + 1
		}
	}
	return ans
}
