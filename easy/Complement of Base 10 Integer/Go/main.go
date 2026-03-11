// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
func bitwiseComplement(n int) int {
	if n == 0 {
		return 1
	}
	var x int = 1
	for x < n {
		x = (x << 1) | 1
	}
	var ans int = n ^ x
	return ans
}
