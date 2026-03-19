// Problem: Count Submatrices with Top-Left Element and Sum Less Than k
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
func countSubmatrices(grid [][]int, k int) int {
	var m int = len(grid)
	var n int = len(grid[0])
	prefix := make([][]int, m+1)
	for i := range prefix {
		prefix[i] = make([]int, n+1)
	}
	for i := 1; i <= m; i++ {
		for j := 1; j <= n; j++ {
			prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + grid[i-1][j-1]
		}
	}
	var ans int = 0
	for i := 1; i <= m; i++ {
		for j := 1; j <= n; j++ {
			if prefix[i][j] <= k {
				ans++
			}
		}
	}
	return ans
}
