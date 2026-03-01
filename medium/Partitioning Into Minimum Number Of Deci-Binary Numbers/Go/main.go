// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
func minPartitions(n string) int {
	var ans int = 0
	for _, c := range n {
		ans = max(ans, int(c-'0'))
	}
	return ans
}
