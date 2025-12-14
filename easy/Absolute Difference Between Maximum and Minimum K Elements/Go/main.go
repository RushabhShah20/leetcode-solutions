// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
func absDifference(nums []int, k int) int {
	sort.Ints(nums)
	var ans int = 0
	var n int = len(nums)
	for i := 0; i < k; i++ {
		ans += (-nums[i] + nums[n-i-1])
	}
	return ans
}
