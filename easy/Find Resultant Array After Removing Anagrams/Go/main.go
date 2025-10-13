// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
func compare(str1 string, str2 string) bool {
	var charArray1 []rune = []rune(str1)
	sort.Slice(charArray1, func(i int, j int) bool {
		return charArray1[i] < charArray1[j]
	})
	var char1 string = string(charArray1)
	var charArray2 []rune = []rune(str2)
	sort.Slice(charArray2, func(i int, j int) bool {
		return charArray2[i] < charArray2[j]
	})
	var char2 string = string(charArray2)
	return char1 == char2
}
func removeAnagrams(words []string) []string {
	var a int = 0
	var v []string
	for i := 1; i < len(words); i++ {
		if compare(words[a], words[i]) {
			words[i] = "1"
		} else {
			a = i
		}
	}
	for i := 0; i < len(words); i++ {
		if words[i] != "1" {
			v = append(v, words[i])
		}
	}
	return v
}
