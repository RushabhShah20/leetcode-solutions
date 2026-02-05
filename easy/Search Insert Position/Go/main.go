// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
func searchInsert(nums []int, target int) int {
	var n int = len(nums)
	var l int = 0
	var r int = n - 1
	for l <= r {
		var m int = (l + r) / 2
		if nums[m] == target {
			return m
		}
		if nums[m] < target {
			l = m + 1
		} else {
			r = m - 1
		}
	}
	return l
}
