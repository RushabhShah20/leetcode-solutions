// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
func uniquePaths(grid [][]int) int {
	var k int = 1000000007
	var n int = len(grid)
	var m int = len(grid[0])
	var a [][]int = make([][]int, m)
	var idx int
	for idx = 0; idx < m; idx++ {
		a[idx] = make([]int, 2)
	}
	a[0][0] = 1
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			if i > 0 {
				if grid[i-1][j] == 0 {
					a[j][0] = (a[j][0] + a[j][1]) % k
				} else {
					a[j][0] = a[j][1]
				}
			}
			if j > 0 {
				if grid[i][j-1] == 0 {
					a[j][1] = (a[j-1][0] + a[j-1][1]) % k
				} else {
					a[j][1] = a[j-1][0]
				}
			}
		}
	}
	var ans int = (a[m-1][0] + a[m-1][1]) % k
	return ans
}
