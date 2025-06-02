// Problem: N-th Tribonacci Number
// Link to the problem: https://leetcode.com/problems/n-th-tribonacci-number/
func tribonacci(n int) int {
	if n < 2 {
		return n
	}
	var a int = 0
	var b int = 1
	var c int = 1
	var d int
	for n > 2 {
		d = a + b + c
		a = b
		b = c
		c = d
		n--
	}
	return c
}
