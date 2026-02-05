// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
func constructTransformedArray(nums []int) []int {
	var n int = len(nums)
	var ans []int = make([]int, n)
	for i := 0; i < n; i++ {
		ans[i] = nums[(i+nums[i]%n+n)%n]
	}
	return ans
}
