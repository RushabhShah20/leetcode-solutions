// Problem: Append Characters to String to Make Subsequence
// Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
func appendCharacters(s string, t string) int {
	var ans int = 0
	var i int = 0
	var j int = 0
	var n int = len(s)
	var m int = len(t)
	for i < n && j < m {
		if s[i] == t[j] {
			j++
		}
		i++
	}
	ans = m - j
	return ans
}
