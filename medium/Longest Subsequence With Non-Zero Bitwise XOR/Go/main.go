// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
func longestSubsequence(nums []int) int {
	var n int = len(nums)
	var x int = 0
	var y bool = true
	for i := 0; i < n; i++ {
		x ^= nums[i]
		if nums[i] > 0 {
			y = false
		}
	}
	if x > 0 {
		return n
	}
	if y {
		return 0
	} else {
		return n - 1
	}
}
