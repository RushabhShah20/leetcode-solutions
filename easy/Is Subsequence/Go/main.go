// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
func isSubsequence(s string, t string) bool {
	var n int = len(t)
	var m int = len(s)
	var i int = 0
	var j int = 0
	for i < n && j < m {
		if t[i] == s[j] {
			j++
		}
		i++
	}
	if j < m {
		return false
	} else {
		return true
	}
}
