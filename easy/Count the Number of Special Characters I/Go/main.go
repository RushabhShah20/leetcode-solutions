// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
func numberOfSpecialChars(word string) int {
	var n int = len(word)
	var ans int = 0
	var lower []int = make([]int, 26)
	var upper []int = make([]int, 26)
	for i := 0; i < n; i++ {
		var c rune = rune(word[i])
		if unicode.IsLower(c) {
			lower[c-'a']++
		} else {
			upper[c-'A']++
		}
	}
	for i := 0; i < 26; i++ {
		if lower[i] > 0 && upper[i] > 0 {
			ans++
		}
	}
	return ans
}
