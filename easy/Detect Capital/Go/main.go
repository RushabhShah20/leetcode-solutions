// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
func detectCapitalUse(word string) bool {
	var all_uppercase bool = true
	var all_lowercase bool = true
	for i := 1; i < len(word); i++ {
		if unicode.IsLower(rune(word[i])) {
			all_uppercase = false
		}
		if unicode.IsUpper(rune(word[i])) {
			all_lowercase = false
		}
	}
	if unicode.IsLower(rune(word[0])) && all_lowercase == true {
		return true
	} else if unicode.IsUpper(rune(word[0])) && all_uppercase == true {
		return true
	} else if unicode.IsUpper(rune(word[0])) && all_lowercase == true {
		return true
	} else {
		return false
	}
}
