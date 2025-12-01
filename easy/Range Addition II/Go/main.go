// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
func maxCount(m int, n int, ops [][]int) int {
	for _, op := range ops {
		m = min(m, op[0])
		n = min(n, op[1])
	}
	var ans int = m * n
	return ans
}
