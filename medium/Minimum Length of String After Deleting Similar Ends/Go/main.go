// Problem: Minimum Length of String After Deleting Similar Ends
// Link to the problem: https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/
func minimumLength(s string) int {
	var n int = len(s)
	var i int = 0
	var j int = n - 1
	for i < j && s[i] == s[j] {
		var c byte = s[i]
		for i <= j && s[i] == c {
			i++
		}
		for i <= j && s[j] == c {
			j--
		}
	}
	var ans int = j - i + 1
	return ans
}
