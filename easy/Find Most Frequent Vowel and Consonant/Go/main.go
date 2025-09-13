// Problem: Find Most Frequent Vowel And Consonant
// Link to the problem: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
func maxFreqSum(s string) int {
	var max_vowels int = 0
	var max_consonents int = 0
	var vowels map[rune]int = make(map[rune]int)
	var consonents map[rune]int = make(map[rune]int)
	for _, c := range s {
		if c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' {
			vowels[c]++
		} else {
			consonents[c]++
		}
	}
	for _, v := range vowels {
		if v > max_vowels {
			max_vowels = v
		}
	}
	for _, v := range consonents {
		if v > max_consonents {
			max_consonents = v
		}
	}
	return max_vowels + max_consonents
}
