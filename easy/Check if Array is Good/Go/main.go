// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
func isGood(nums []int) bool {
	if len(nums) == 1 {
		return false
	}
	var n int = len(nums)
	sort.Ints(nums)
	for i := 0; i < n-1; i++ {
		if nums[i] != i+1 {
			return false
		}
	}
	if nums[n-1] != n-1 {
		return false
	}
	return true
}
