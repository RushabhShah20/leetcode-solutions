// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
func minChanges(s string) int {
	var n int = len(s)
	var ans int = 0
	for i := 1; i < n; i += 2 {
		if s[i] != s[i-1] {
			ans++
		}
	}
	return ans
}
