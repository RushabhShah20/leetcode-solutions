// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
func luckyNumbers(matrix [][]int) []int {
	var m int = len(matrix)
	var n int = len(matrix[0])
	var ans []int
	var col int = -1
	for i := 0; i < m; i++ {
		var minVal int = 100001
		var maxVal int = 0
		for j := 0; j < n; j++ {
			if matrix[i][j] < minVal {
				minVal = matrix[i][j]
				col = j
			}
		}
		for k := 0; k < m; k++ {
			if matrix[k][col] > maxVal {
				maxVal = matrix[k][col]
			}
		}
		if minVal == maxVal {
			ans = append(ans, minVal)
		}
	}
	return ans
}
