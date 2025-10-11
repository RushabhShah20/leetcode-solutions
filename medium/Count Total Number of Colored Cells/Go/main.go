// Problem: Count Total Number of Colored Cells
// Link to the problem: https://leetcode.com/problems/count-total-number-of-colored-cells/
func coloredCells(n int) int64 {
	var ans int64 = 0
	for i := 1; i < (2*n)-1; i += 2 {
		ans += (2 * int64(i))
	}
	ans += ((2 * int64(n)) - 1)
	return ans
}
