// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
func minMoves2(nums []int) int {
	var n int = len(nums)
	var ans int = 0
	var l int = 0
	var r int = n - 1
	sort.Ints(nums)
	for l <= r {
		ans += nums[r] - nums[l]
		l++
		r--
	}
	return ans
}
