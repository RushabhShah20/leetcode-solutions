// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func leftRightDifference(nums []int) []int {
	var n int = len(nums)
	var ans []int = make([]int, n)
	var left []int = make([]int, n)
	var right []int = make([]int, n)
	var sum int = 0
	for i := 0; i < n; i++ {
		left[i] = sum
		sum += nums[i]
	}
	sum = 0
	for i := n - 1; i >= 0; i-- {
		right[i] = sum
		sum += nums[i]
	}
	for i := 0; i < n; i++ {
		ans[i] = Abs(left[i], right[i])
	}
	return ans
}
