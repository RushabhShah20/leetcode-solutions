// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
func minMoves(nums []int) int {
	var n int = len(nums)
	var ans int = 0
	var mn int = 1000000001
	for i := 0; i < n; i++ {
		mn = min(mn, nums[i])
	}
	for i := 0; i < n; i++ {
		ans += nums[i] - mn
	}
	return ans
}
