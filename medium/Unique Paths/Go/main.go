// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
func uniquePaths(m int, n int) int {
	var ans int = 1
	var down_moves int = m - 1
	var right_moves int = n - 1
	var x int = max(down_moves, right_moves)
	var y int = min(down_moves, right_moves)
	for i := 1; i <= y; i++ {
		ans *= (x + i)
		ans /= i
	}
	return ans
}
