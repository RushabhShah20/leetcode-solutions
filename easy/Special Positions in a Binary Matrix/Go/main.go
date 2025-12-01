// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
func numSpecial(mat [][]int) int {
	var m int = len(mat)
	var n int = len(mat[0])
	var ans int = 0
	var rows []int = make([]int, m)
	var cols []int = make([]int, n)
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if mat[i][j] == 1 {
				rows[i]++
				cols[j]++
			}
		}
	}
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1 {
				ans++
			}
		}
	}
	return ans
}
