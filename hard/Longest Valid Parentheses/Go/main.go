// Problem: Longest Valid Parentheses
// Link to the problem: https://leetcode.com/problems/longest-valid-parentheses/
func longestValidParentheses(s string) int {
	var n int = len(s)
	var ans int = 0
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' {
			x++
		} else {
			y++
		}
		if x == y {
			ans = max(ans, x+y)
		} else if y > x {
			x = 0
			y = 0
		}
	}
	x = 0
	y = 0
	for i := n - 1; i >= 0; i-- {
		if s[i] == '(' {
			x++
		} else {
			y++
		}
		if x == y {
			ans = max(ans, x+y)
		} else if x > y {
			x = 0
			y = 0
		}
	}
	return ans
}
