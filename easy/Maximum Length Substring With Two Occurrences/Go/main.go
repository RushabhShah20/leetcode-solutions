// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
func maximumLengthSubstring(s string) int {
	var n int = len(s)
	var i int = 0
	var j int = 0
	var ans int = 0
	var a []int = make([]int, 26)
	for j < n {
		a[s[j]-'a']++
		for a[s[j]-'a'] > 2 && i < n {
			a[s[i]-'a']--
			i++
		}
		ans = max(ans, j-i+1)
		j++
	}
	return ans
}
