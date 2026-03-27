// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
func areSimilar(mat [][]int, k int) bool {
	var m int = len(mat)
	var n int = len(mat[0])
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if mat[i][j] != mat[i][(j+k)%n] {
				return false
			}
		}
	}
	return true
}
