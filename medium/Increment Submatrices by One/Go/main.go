// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
func rangeAddQueries(n int, queries [][]int) [][]int {
	var prefix [][]int = make([][]int, n+1)
	for i := 0; i < n+1; i++ {
		prefix[i] = make([]int, n+1)
	}
	for _, query := range queries {
		for i := query[0]; i <= query[2]; i++ {
			prefix[i][query[1]]++
			prefix[i][query[3]+1]--
		}
	}
	for i := 0; i < n; i++ {
		for j := 1; j < n; j++ {
			prefix[i][j] += prefix[i][j-1]
		}
	}
	var ans [][]int = make([][]int, n)
	for i := 0; i < n; i++ {
		ans[i] = make([]int, n)
	}
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			ans[i][j] = prefix[i][j]
		}
	}
	return ans
}
