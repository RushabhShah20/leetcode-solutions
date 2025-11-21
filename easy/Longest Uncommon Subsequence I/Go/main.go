// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
func findLUSlength(a string, b string) int {
	if a == b {
		return -1
	} else {
		return max(len(a), len(b))
	}
}
