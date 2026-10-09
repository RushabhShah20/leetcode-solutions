// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
func minInsertions(s string) int {
	var n int = len(s)
	var ans int = 0
	var x int = 0
	for i := 0; i < n; i++ {
		if s[i] == '(' {
			if (x & 1) == 1 {
				ans++
				x++
			} else {
				x += 2
			}
		} else if x == 0 {
			ans++
			x = 1
		} else {
			x--
		}
	}
	ans += x
	return ans
}
