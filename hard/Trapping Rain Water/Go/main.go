// Problem: Trapping Rain Water
// Link to the problem: https://leetcode.com/problems/trapping-rain-water/
func trap(height []int) int {
	var i int = 0
	var left_max int = height[0]
	var ans int = 0
	var j int = len(height) - 1
	var right_max int = height[j]
	for i < j {
		if left_max <= right_max {
			ans += (left_max - height[i])
			i++
			left_max = max(left_max, height[i])
		} else {
			ans += (right_max - height[j])
			j--
			right_max = max(right_max, height[j])
		}
	}
	return ans
}
