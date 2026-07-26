// Problem: Maximum Product of Three Numbers
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
func maximumProduct(nums []int) int {
	var n int = len(nums)
	var a int = -1001
	var b int = -1001
	var c int = -1001
	var x int = 1001
	var y int = 1001
	for i := 0; i < n; i++ {
		if nums[i] < x {
			y = x
			x = nums[i]
		} else if nums[i] < y {
			y = nums[i]
		}
		if nums[i] > a {
			c = b
			b = a
			a = nums[i]
		} else if nums[i] > b {
			c = b
			b = nums[i]
		} else if nums[i] > c {
			c = nums[i]
		}
	}
	var ans int = max(a*b*c, a*x*y)
	return ans
}
