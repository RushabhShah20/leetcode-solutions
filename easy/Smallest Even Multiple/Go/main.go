// Problem: Smallest Even Multiple
// Link to the problem: https://leetcode.com/problems/smallest-even-multiple/
func smallestEvenMultiple(n int) int {
	if n%2 == 0 {
		return n
	} else {
		return 2 * n
	}
}
