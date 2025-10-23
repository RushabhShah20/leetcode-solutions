// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
func hasSameDigits(s string) bool {
	for len(s) != 2 {
		var t string = ""
		for i := 0; i < len(s)-1; i++ {
			var x int = int(s[i] - '0')
			var y int = int(s[i+1] - '0')
			var z int = (x + y) % 10
			var a rune = rune(z + '0')
			t += string(a)
		}
		s = t
	}
	return s[0] == s[1]
}
