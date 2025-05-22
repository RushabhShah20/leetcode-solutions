// Problem: Sum of Two Integers
// Link to the problem: https://leetcode.com/problems/sum-of-two-integers/
func getSum(a int, b int) int {
	for b != 0 {
		var x int = (a & b) << 1
		a = a ^ b
		b = x
	}
	return a
}
