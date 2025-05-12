// Problem: Keyboard Row
// Link to the problem: https://leetcode.com/problems/keyboard-row/
func findWords(words []string) []string {
	var first_row string = "qwertyuiop"
	var second_row string = "asdfghjkl"
	var thrid_row string = "zxcvbnm"
	var ans []string
	for i := 0; i < len(words); i++ {
		if strings.Index(first_row, strings.ToLower(string(words[i][0]))) != -1 {
			var x bool = true
			for j := 0; j < len(words[i]); j++ {
				if strings.Index(first_row, strings.ToLower(string(words[i][j]))) == -1 {
					x = false
					break
				}
			}
			if x == true {
				ans = append(ans, words[i])
			}
		} else if strings.Index(second_row, strings.ToLower(string(words[i][0]))) != -1 {
			var x bool = true
			for j := 0; j < len(words[i]); j++ {
				if strings.Index(second_row, strings.ToLower(string(words[i][j]))) == -1 {
					x = false
					break
				}
			}
			if x == true {
				ans = append(ans, words[i])
			}
		} else if strings.Index(thrid_row, strings.ToLower(string(words[i][0]))) != -1 {
			var x bool = true
			for j := 0; j < len(words[i]); j++ {
				if strings.Index(thrid_row, strings.ToLower(string(words[i][j]))) == -1 {
					x = false
					break
				}
			}
			if x == true {
				ans = append(ans, words[i])
			}
		}
	}
	return ans
}
