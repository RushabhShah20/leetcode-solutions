// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
func digitSum(s string, k int) string {
	for len(s) > k {
		var t strings.Builder
		var n int = len(s)
		for i := 0; i < n; i += k {
			var x int = 0
			var end int = i + k
			if end > n {
				end = n
			}
			for j := i; j < end; j++ {
				x += int(s[j] - '0')
			}
			t.WriteString(strconv.Itoa(x))
		}
		s = t.String()
	}
	return s
}
