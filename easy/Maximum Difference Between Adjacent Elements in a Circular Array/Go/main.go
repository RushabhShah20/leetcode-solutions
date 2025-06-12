// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func maxAdjacentDistance(nums []int) int {
	var ans int = 0
	for i := 1; i < len(nums); i++ {
		ans = max(Abs(nums[i], nums[i-1]), ans)
	}
	ans = max(Abs(nums[len(nums)-1], nums[0]), ans)
	return ans
}
