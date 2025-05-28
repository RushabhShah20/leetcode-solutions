// Problem: Divisible and Non-divisible Sums Difference
// Link to the problem: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
func differenceOfSums(n int, m int) int {
	var suma int = 0
	var sumb int = 0
	for i := 1; i <= n; i++ {
		if i%m == 0 {
			sumb += i
		} else {
			suma += i
		}
	}
	return suma - sumb
}
