// Problem: Binary Search
// Link to the problem: https://leetcode.com/problems/binary-search/
func search(nums []int, target int) int {
	var start int = 0
	var end int = len(nums) - 1
	for start <= end {
		var mid int = start + (end-start)/2
		if nums[mid] == target {
			return mid
		} else if nums[mid] < target {
			start = mid + 1
		} else {
			end = mid - 1
		}
	}
	return -1
}
