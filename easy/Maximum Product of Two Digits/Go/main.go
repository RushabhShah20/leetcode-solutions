// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
func maxProduct(n int) int {
	var x int = 0
	var y int = 0
	for n > 0 {
		var k int = n % 10
		if k > x {
			y = x
			x = k
		} else if k > y {
			y = k
		}
		n /= 10
	}
	var ans int = x * y
	return ans
}
