// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
func abs(n int) int {
	if n >= 0 {
		return n
	} else {
		return -n
	}
}
func maximumJumps(nums []int, target int) int {
	var n int = len(nums)
	var dp []int = make([]int, n)
	for i := 0; i < n; i++ {
		dp[i] = -1
	}
	dp[0] = 0
	for i := 1; i < n; i++ {
		for j := 0; j < i; j++ {
			if abs(nums[i]-nums[j]) <= target && dp[j] != -1 {
				dp[i] = max(dp[i], dp[j]+1)
			}
		}
	}
	var ans int = dp[n-1]
	return ans
}
