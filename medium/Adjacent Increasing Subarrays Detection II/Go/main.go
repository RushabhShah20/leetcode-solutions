// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
func maxIncreasingSubarrays(nums []int) int {
	var n int = len(nums)
	var prevK int = 1
	var k int = 1
	var res int = 1
	for i := 0; i < n-1; i++ {
		if nums[i+1] > nums[i] {
			k++
		} else {
			prevK = k
			k = 1
		}
		res = max(res, min(prevK, k))
		res = max(res, k/2)
	}
	return res
}
