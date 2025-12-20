// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
func minDeletionSize(strs []string) int {
	var n int = len(strs)
	var m int = len(strs[0])
	var ans int = 0
	for j := 0; j < m; j++ {
		for i := 0; i < n-1; i++ {
			if (strs[i][j] - 'a') > (strs[i+1][j] - 'a') {
				ans++
				break
			}
		}
	}
	return ans
}
