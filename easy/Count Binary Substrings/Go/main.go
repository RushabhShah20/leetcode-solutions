// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
func countBinarySubstrings(s string) int {
	var n int = len(s)
	var ans int = 0
	var prev int = 0
	var curr int = 1
	for i := 1; i < n; i++ {
		if s[i-1] != s[i] {
			ans += min(prev, curr)
			prev = curr
			curr = 1
		} else {
			curr++
		}
	}
	ans += min(prev, curr)
	return ans
}
