// Problem: Count Distinct Numbers on Board
// Link to the problem: https://leetcode.com/problems/count-distinct-numbers-on-board/
func distinctIntegers(n int) int {
	if n == 1 {
		return 1
	} else {
		return n - 1
	}
}