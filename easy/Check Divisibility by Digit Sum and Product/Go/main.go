// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
func checkDivisibility(n int) bool {
	var x int = 0
	var y int = 1
	var m int = n
	for m > 0 {
		var z int = m % 10
		x += z
		y *= z
		m /= 10
	}
	var ans bool = n%(x+y) == 0
	return ans
}
