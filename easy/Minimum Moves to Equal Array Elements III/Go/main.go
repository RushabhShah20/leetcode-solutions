// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
func minMoves(nums []int) int {
	var n int = len(nums)
	var mx int = 0
	for i := 0; i < n; i++ {
		mx = max(mx, nums[i])
	}
	var ans int = 0
	for i := 0; i < n; i++ {
		ans += mx - nums[i]
	}
	return ans
}
