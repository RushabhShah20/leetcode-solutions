// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
func reverseSubmatrix(grid [][]int, x int, y int, k int) [][]int {
	var ans [][]int = grid
	for i := x; i < x+(k+1)/2; i++ {
		for j := y; j < y+k; j++ {
			var temp int = ans[i][j]
			ans[i][j] = ans[2*x+k-i-1][j]
			ans[2*x+k-i-1][j] = temp
		}
	}
	return ans
}
