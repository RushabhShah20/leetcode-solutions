// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
func longestMonotonicSubarray(nums []int) int {
	var n int = len(nums)
	var a int = 1
	var b int = 1
	var c int = 1
	var d int = 1
	for i := 1; i < n; i++ {
		if nums[i] > nums[i-1] {
			c++
			a = max(a, c)
			d = 1
		} else if nums[i] < nums[i-1] {
			d++
			b = max(b, d)
			c = 1
		} else {
			c = 1
			d = 1
		}
	}
	var ans int = max(a, b)
	return ans
}
