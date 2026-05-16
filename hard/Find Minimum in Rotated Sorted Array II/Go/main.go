// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
func findMin(nums []int) int {
	var n int = len(nums)
	var l int = 0
	var r int = n - 1
	for l <= r {
		var m int = l + (r-l)/2
		if nums[m] > nums[r] {
			l = m + 1
		} else if nums[m] < nums[l] {
			r = m
			l++
		} else {
			r--
		}
	}
	var ans int = nums[l]
	return ans
}
