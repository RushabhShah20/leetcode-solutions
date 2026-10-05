// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
func scoreOfParentheses(s string) int {
	var n int = len(s)
	var ans int = 0
	var x int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' {
			x++
		} else {
			x--
			if s[i-1] == '(' {
				ans += 1 << x
			}
		}
	}
	return ans
}
