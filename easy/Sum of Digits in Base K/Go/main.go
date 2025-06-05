// Problem: Sum of Digits in Base K
// Link to the problem: https://leetcode.com/problems/sum-of-digits-in-base-k/
func sumBase(n int, k int) int {
	var sum int = 0
	for n > 0 {
		sum += n % k
		n /= k
	}
	return sum
}
