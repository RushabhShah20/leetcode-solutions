// Problem: Minimum Cuts to Divide a Circle
// Link to the problem: https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
func numberOfCuts(n int) int {
	if n == 1 {
		return 0
	} else if n%2 == 0 {
		return n / 2
	} else {
		return n
	}
}