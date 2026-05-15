// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
func findMin(nums []int) int {
	var n int = len(nums)
	var ans int = 5001
	var l int = 0
	var r int = n - 1
	for l <= r {
		var m int = l + (r-l)/2
		if nums[l] <= nums[m] {
			ans = min(ans, nums[l])
			l = m + 1
		} else {
			r = m - 1
			ans = min(ans, nums[m])
		}
	}
	return ans
}
