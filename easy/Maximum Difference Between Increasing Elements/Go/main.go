// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
func maximumDifference(nums []int) int {
	var n int = len(nums)
	var res int = 0
	var pre []int = make([]int, n)
	var suff []int = make([]int, n)
	pre[0] = nums[0]
	suff[n-1] = nums[n-1]
	for i := 1; i < n; i++ {
		pre[i] = min(pre[i-1], nums[i])
	}
	for i := n - 2; i >= 0; i-- {
		suff[i] = max(suff[i+1], nums[i])
	}
	for i := 0; i < n; i++ {
		res = max(res, suff[i]-pre[i])
	}
	if res == 0 {
		return -1
	}
	return res
}
