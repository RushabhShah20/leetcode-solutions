// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
func countNegatives(grid [][]int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	var ans int = 0
	var i int = m - 1
	var j int = 0
	for i >= 0 && j < n {
		if grid[i][j] < 0 {
			ans += (n - j)
			i--
		} else {
			j++
		}
	}
	return ans
}
