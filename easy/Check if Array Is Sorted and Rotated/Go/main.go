// Problem: Check if Array Is Sorted and Rotated
// Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
func check(nums []int) bool {
	var n int = len(nums)
	var x int = 0
	for i := 0; i < n; i++ {
		if nums[i] > nums[(i+1)%n] {
			x++
		}
		if x > 1 {
			return false
		}
	}
	return true
}
