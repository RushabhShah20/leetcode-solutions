// Problem: Ugly Number
// Link to the problem: https://leetcode.com/problems/ugly-number/
func isUgly(n int) bool {
	if n <= 0 {
		return false
	} else {
		for n%2 == 0 {
			n /= 2
		}
		for n%3 == 0 {
			n /= 3
		}
		for n%5 == 0 {
			n /= 5
		}
		return n == 1
	}
}
