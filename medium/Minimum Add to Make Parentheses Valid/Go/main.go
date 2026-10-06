// Problem: Minimum Add to Make Parentheses Valid
// Link to the problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
func minAddToMakeValid(s string) int {
	var n int = len(s)
	var x int = 0
	var y int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' {
			x++
		} else {
			if x > 0 {
				x--
			} else {
				y++
			}
		}
	}
	var ans int = x + y
	return ans
}
