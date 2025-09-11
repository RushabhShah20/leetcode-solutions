// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
func sortVowels(s string) string {
	var indices []int
	var alphabets []rune
	var runes []rune = []rune(s)
	for i, char := range runes {
		if char == 'a' || char == 'e' || char == 'i' || char == 'o' || char == 'u' || char == 'A' || char == 'E' || char == 'I' || char == 'O' || char == 'U' {
			indices = append(indices, i)
			alphabets = append(alphabets, char)
		}
	}
	sort.Slice(alphabets, func(i, j int) bool {
		return alphabets[i] < alphabets[j]
	})
	for i := 0; i < len(indices); i++ {
		runes[indices[i]] = alphabets[i]
	}
	return string(runes)
}
