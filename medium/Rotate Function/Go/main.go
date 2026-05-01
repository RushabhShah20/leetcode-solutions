// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
func maxRotateFunction(nums []int) int {
	var n int = len(nums)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		x += nums[i]
		y += i * nums[i]
	}
	var ans int = y
	for i := n - 1; i >= 0; i-- {
		y = y + x - n*nums[i]
		ans = max(ans, y)
	}
	return ans
}
