// Problem: Process String with Special Operations I
// Link to the problem: https://leetcode.com/problems/process-string-with-special-operations-i/
func processStr(s string) string {
	var ans []rune = []rune{}
	for _, c := range s {
		if c == '*' {
			if len(ans) > 0 {
				ans = ans[:len(ans)-1]
			}
		} else if c == '#' {
			ans = append(ans, ans...)
		} else if c == '%' {
			for left, right := 0, len(ans)-1; left < right; left, right = left+1, right-1 {
				ans[left], ans[right] = ans[right], ans[left]
			}
		} else {
			ans = append(ans, c)
		}
	}
	return string(ans)
}
