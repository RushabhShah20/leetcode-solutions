// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
func countServers(n int, logs [][]int, x int, queries []int) []int {
	var m int = len(queries)
	var k int = len(logs)
	sort.Slice(logs, func(p int, q int) bool {
		return logs[p][1] < logs[q][1]
	})
	var a [][]int = make([][]int, m)
	for i := 0; i < m; i++ {
		a[i] = make([]int, 2)
		a[i][0] = queries[i]
		a[i][1] = i
	}
	sort.Slice(a, func(p int, q int) bool {
		if a[p][0] != a[q][0] {
			return a[p][0] < a[q][0]
		}
		return a[p][1] < a[q][1]
	})
	var ans []int = make([]int, m)
	var b []int = make([]int, n+1)
	var l int = 0
	var r int = 0
	var y int = 0
	for i := 0; i < m; i++ {
		for r < k && logs[r][1] <= a[i][0] {
			var c int = logs[r][0]
			r++
			b[c]++
			if b[c] == 1 {
				y++
			}
		}
		for l < r && logs[l][1] < a[i][0]-x {
			var c int = logs[l][0]
			l++
			b[c]--
			if b[c] == 0 {
				y--
			}
		}
		ans[a[i][1]] = n - y
	}
	return ans
}
