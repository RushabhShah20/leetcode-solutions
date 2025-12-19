// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
func canJump(nums []int) bool {
	var n int = len(nums)
	var x int = 0
	for i := 0; i < n; i++ {
		if i > x {
			return false
		}
		x = max(x, i+nums[i])
	}
	return true
}
