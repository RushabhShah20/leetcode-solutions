// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func maxLength(nums []int) int {
	var n int = len(nums)
	var ans int = 2
	var x int = 1
	var i int = 0
	for j := 0; j < n; j++ {
		for gcd(x, nums[j]) > 1 {
			x /= nums[i]
			i++
		}
		x *= nums[j]
		ans = max(ans, j-i+1)
	}
	return ans
}
