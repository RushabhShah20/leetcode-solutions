// Problem: Score of a String
// Link to the problem: https://leetcode.com/problems/score-of-a-string/
func Abs(x, y int) int {
	if x < y {
		return y - x
	}
	return x - y
}
func scoreOfString(s string) int {
	var ans int = 0
	for i := 0; i < len(s)-1; i++ {
		ans += Abs(int(s[i]), int(s[i+1]))
	}
	return ans
}
