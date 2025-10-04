// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
func maxArea(height []int) int {
	var ans int = 0
	var n int = len(height)
	var left int = 0
	var right int = n - 1
	for left <= right {
		var vol int = (right - left) * min(height[left], height[right])
		ans = max(ans, vol)
		if height[left] <= height[right] {
			left++
		} else {
			right--
		}
	}
	return ans
}
