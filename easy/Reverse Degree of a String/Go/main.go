// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
func reverseDegree(s string) int {
	var n int = len(s)
	var ans int = 0
	for i := 0; i < n; i++ {
		ans += (26 - int(s[i]-'a')) * (i + 1)
	}
	return ans
}
