// Problem: Rotate Image
// Link to the problem: https://leetcode.com/problems/rotate-image/
func rotate(matrix [][]int) {
	var n int = len(matrix)
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			var temp int = matrix[i][j]
			matrix[i][j] = matrix[j][i]
			matrix[j][i] = temp
		}
	}
	for i := 0; i < n; i++ {
		for j := 0; j < n/2; j++ {
			var temp int = matrix[i][j]
			matrix[i][j] = matrix[i][n-1-j]
			matrix[i][n-1-j] = temp
		}
	}
}
