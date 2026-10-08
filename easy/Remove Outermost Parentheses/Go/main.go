// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
func removeOuterParentheses(s string) string {
	var n int = len(s)
	var x int = 0
	var ans []rune = []rune{}
	for i := 0; i < n; i++ {
		if s[i] == ')' {
			x--
		}
		if x > 0 {
			ans = append(ans, rune(s[i]))
		}
		if s[i] == '(' {
			x++
		}
	}
	return string(ans)
}
