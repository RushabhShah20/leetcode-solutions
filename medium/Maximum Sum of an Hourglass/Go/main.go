// Problem: Maximum Sum of an Hourglass
// Link to the problem: https://leetcode.com/problems/maximum-sum-of-an-hourglass/
func maxSum(grid [][]int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	var ans int = 0
	for i := 1; i < m-1; i++ {
		for j := 1; j < n-1; j++ {
			var x int = grid[i-1][j-1] + grid[i-1][j] + grid[i-1][j+1] + grid[i][j] + grid[i+1][j-1] + grid[i+1][j] + grid[i+1][j+1]
			ans = max(ans, x)
		}
	}
	return ans
}
