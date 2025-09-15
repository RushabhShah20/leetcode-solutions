// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
func canBeTypedWords(text string, brokenLetters string) int {
	var words []string = strings.Split(text, " ")
	var ans int = len(words)
	for i := 0; i < len(words); i++ {
		for j := 0; j < len(brokenLetters); j++ {
			if strings.Contains(words[i], string(brokenLetters[j])) {
				ans--
				break
			}
		}
	}
	return ans
}
