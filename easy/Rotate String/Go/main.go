// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
func rotateString(s string, goal string) bool {
	if len(s) != len(goal) {
		return false
	} else {
		s = s + s
		var ans bool = strings.Contains(s, goal)
		return ans
	}
}
