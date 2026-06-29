// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
func numOfStrings(patterns []string, word string) int {
	var n int = len(patterns)
	var ans int = 0
	for i := 0; i < n; i++ {
		if strings.Contains(word, patterns[i]) {
			ans++
		}
	}
	return ans
}
