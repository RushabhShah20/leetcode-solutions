// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
func abs(x int) int {
	if x <= 0 {
		return -x
	} else {
		return x
	}
}
func minLengthAfterRemovals(s string) int {
	var ans int = 0
	for _, c := range s {
		if c == 'a' {
			ans += 1
		} else {
			ans -= 1
		}
	}
	return abs(ans)
}
