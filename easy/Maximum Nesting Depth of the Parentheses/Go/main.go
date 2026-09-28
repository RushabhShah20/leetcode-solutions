// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
func maxDepth(s string) int {
	var n int = len(s)
	var ans int = 0
	var x int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' {
			x++
		}
		if s[i] == ')' {
			x--
		}
		ans = max(ans, x)
	}
	return ans
}
