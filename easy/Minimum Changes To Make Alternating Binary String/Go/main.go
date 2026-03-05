// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
func minOperations(s string) int {
	var n int = len(s)
	var ansEven int = 0
	var ansOdd int = 0
	for i := 0; i < n; i++ {
		if i%2 == 0 {
			if s[i] == '0' {
				ansEven++
			} else {
				ansOdd++
			}
		} else {
			if s[i] == '1' {
				ansEven++
			} else {
				ansOdd++
			}
		}
	}
	var ans int = min(ansEven, ansOdd)
	return ans
}
