// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
func sumAndMultiply(n int) int64 {
	var x int64 = 0
	var y int64 = 0
	var a int64 = 1
	for n > 0 {
		var z int64 = int64(n) % 10
		n /= 10
		if z == 0 {
			continue
		}
		x = z*a + x
		y += z
		a *= 10
	}
	var ans int64 = x * y
	return ans
}
