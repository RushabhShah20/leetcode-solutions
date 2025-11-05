// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
func getLongestSubsequence(words []string, groups []int) []string {
	var n int = len(groups)
	var ans []string
	ans = append(ans, words[0])
	for i := 1; i < n; i++ {
		if groups[i] != groups[i-1] {
			ans = append(ans, words[i])
		}
	}
	return ans
}
