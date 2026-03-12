// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
func findComplement(num int) int {
	if num == 0 {
		return 1
	}
	var x int = 1
	for x < num {
		x = (x << 1) | 1
	}
	var ans int = num ^ x
	return ans
}
