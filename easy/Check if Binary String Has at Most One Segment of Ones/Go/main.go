// Problem: Check if Binary String Has at Most One Segment of Ones
// Link to the problem: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
func checkOnesSegment(s string) bool {
	var count int = 0
	for i := 1; i < len(s); i++ {
		if s[i] == '0' {
			count++
		}
		if s[i] == '1' && count != 0 {
			return false
		}
	}
	return true
}
