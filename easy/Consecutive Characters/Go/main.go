// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
func maxPower(s string) int {
	var ans int = 1
	var count int = 1
	for i := 0; i < len(s)-1; i++ {
		if s[i] == s[i+1] {
			count++
			ans = max(ans, count)
		} else {
			count = 1
		}
	}
	return ans
}
