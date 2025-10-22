// Problem: Maximum Score After Splitting a String
// Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
func maxScore(s string) int {
	var ans int = 0
	var pref []int = make([]int, len(s))
	if s[0] == '1' {
		pref[0] = 0
	} else {
		pref[0] = 1
	}
	for i := 1; i < len(s); i++ {
		if s[i] == '1' {
			pref[i] = pref[i-1]
		} else {
			pref[i] = pref[i-1] + 1
		}
	}
	for i := 0; i < len(s)-1; i++ {
		var score int = (pref[i] + ((len(s) - i - 1) - (pref[len(s)-1] - pref[i])))
		ans = max(ans, score)
	}
	return ans
}
