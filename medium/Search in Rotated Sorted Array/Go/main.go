// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
func search(nums []int, target int) int {
	var n int = len(nums)
	var l int = 0
	var r int = n - 1
	for l <= r {
		var m int = l + (r-l)/2
		if nums[m] == target {
			return m
		}
		if nums[m] >= nums[l] {
			if nums[l] <= target && target < nums[m] {
				r = m - 1
			} else {
				l = m + 1
			}
		} else {
			if nums[m] < target && nums[r] >= target {
				l = m + 1
			} else {
				r = m - 1
			}
		}
	}
	return -1
}
