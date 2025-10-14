// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
func isStrictlyIncreasing(nums []int, start int, k int) bool {
	for i := start; i < start+k-1; i++ {
		if nums[i] >= nums[i+1] {
			return false
		}
	}
	return true
}
func hasIncreasingSubarrays(nums []int, k int) bool {
	var n int = len(nums)
	if n < 2*k {
		return false
	}
	for i := 0; i <= n-2*k; i++ {
		if isStrictlyIncreasing(nums, i, k) && isStrictlyIncreasing(nums, i+k, k) {
			return true
		}
	}
	return false
}
