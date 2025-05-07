// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
func generate(numRows int) [][]int {
	var ans [][]int
	if numRows <= 0 {
		return ans
	}
	var pre []int
	pre = append(pre, 1)
	ans = append(ans, pre)
	for i := 2; i <= numRows; i++ {
		var cur []int
		cur = append(cur, 1)
		for j := 0; j < len(pre)-1; j++ {
			cur = append(cur, pre[j]+pre[j+1])
		}
		cur = append(cur, 1)
		ans = append(ans, cur)
		pre = cur
	}
	return ans
}
