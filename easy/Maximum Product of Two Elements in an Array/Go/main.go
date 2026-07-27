// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
func maxProduct(nums []int) int {
	var n int = len(nums)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if nums[i] > x {
			y = x
			x = nums[i]
		} else if nums[i] > y {
			y = nums[i]
		}
	}
	var ans int = (x - 1) * (y - 1)
	return ans
}
