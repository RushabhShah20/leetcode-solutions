// Problem: Check if a String Is an Acronym of Words
// Link to the problem: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
func isAcronym(words []string, s string) bool {
	var ans string
	for i := 0; i < len(words); i++ {
		ans += string(words[i][0])
	}
	return ans == s
}
