// Problem: Valid Parenthesis String
// Link to the problem: https://leetcode.com/problems/valid-parenthesis-string/
func checkValidString(s string) bool {
	var n int = len(s)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' || s[i] == '*' {
			x++
		} else {
			x--
		}
		if s[n-1-i] == ')' || s[n-1-i] == '*' {
			y++
		} else {
			y--
		}
		if x < 0 || y < 0 {
			return false
		}
	}
	return true
}
