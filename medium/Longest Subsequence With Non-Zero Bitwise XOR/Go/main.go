// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
func longestSubsequence(nums []int) int {
	var n int = len(nums)
	var z int = 0
	for _, num := range nums {
		z ^= num
	}
	if z != 0 {
		return n
	}
	var x bool = true
	for _, num := range nums {
		if num != 0 {
			x = false
			break
		}
	}
	if x {
		return 0
	}
	return n - 1
}
