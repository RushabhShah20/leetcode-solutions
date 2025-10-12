// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
func longestSubarray(nums []int) int {
	var ans int = 2
	var n int = len(nums)
	var count int = 2
	for i := 2; i < n; i++ {
		if nums[i] == nums[i-1]+nums[i-2] {
			count++
		} else {
			ans = max(ans, count)
			count = 2
		}
	}
	ans = max(ans, count)
	return ans
}
