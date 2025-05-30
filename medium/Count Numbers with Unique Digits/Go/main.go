// Problem: Count Numbers with Unique Digits
// Link to the problem: https://leetcode.com/problems/count-numbers-with-unique-digits/
func countNumbersWithUniqueDigits(n int) int {
	if n == 0 {
		return 1
	}
	if n == 1 {
		return 10
	}
	var total int = 10
	var current int = 9
	for i := 2; i <= n; i++ {
		current *= (10 - (i - 1))
		total += current
	}
	return total
}
