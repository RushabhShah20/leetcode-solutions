// Problem: Maximum Number of Operations to Move Ones to the End
// Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
func maxOperations(s string) int {
	var ans int = 0
	var n int = len(s)
	var ones int = 0
	for i := 0; i < n; i++ {
		if s[i] == '1' {
			ones++
		} else if i > 0 && s[i-1] == '1' {
			ans += ones
		}
	}
	return ans
}
