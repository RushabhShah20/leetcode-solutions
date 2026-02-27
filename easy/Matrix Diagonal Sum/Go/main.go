// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
func diagonalSum(mat [][]int) int {
	var n int = len(mat)
	var ans int = 0
	for i := 0; i < n; i++ {
		ans += mat[i][i]
		if i != n-1-i {
			ans += mat[i][n-i-1]
		}
	}
	return ans
}
