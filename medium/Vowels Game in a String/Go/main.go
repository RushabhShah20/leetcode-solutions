// Problem: Vowels Game in a String
// Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
func doesAliceWin(s string) bool {
	for i := 0; i < len(s); i++ {
		if s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' {
			return true
		}
	}
	return false
}
