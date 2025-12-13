// Problem: Count Beautiful Substrings I
// Link to the problem: https://leetcode.com/problems/count-beautiful-substrings-i/
func beautifulSubstrings(s string, k int) int {
	var ans int = 0
	var n int = len(s)
	for i := 0; i < n; i++ {
		var vowels int = 0
		var consonents int = 0
		for j := i; j < n; j++ {
			if s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' {
				vowels++
			} else {
				consonents++
			}
			if (vowels == consonents) && (vowels*consonents)%k == 0 {
				ans++
			}
		}
	}
	return ans
}
