// Problem: Three Divisors
// Link to the problem: https://leetcode.com/problems/three-divisors/
func isThree(n int) bool {
	var count int = 0
	for i := 1; i <= n; i++ {
		if n%i == 0 {
			count++
		}
	}
	if count == 3 {
		return true
	} else {
		return false
	}
}
