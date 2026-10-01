// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
func isValid(s string) bool {
	var n int = len(s)
	var st []byte
	for i := 0; i < n; i++ {
		if s[i] == '(' || s[i] == '{' || s[i] == '[' {
			st = append(st, s[i])
		} else {
			if len(st) == 0 {
				return false
			}
			var x byte = st[len(st)-1]
			var y byte = s[i]
			if (x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']') {
				st = st[:len(st)-1]
			} else {
				return false
			}
		}
	}
	var ans bool = len(st) == 0
	return ans
}
