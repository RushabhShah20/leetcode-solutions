// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
func maxSumOfSquares(num int, sum int) string {
	if sum < 1 || sum > 9*num {
		return ""
	}
	var x int = sum / 9
	var y int = sum % 9
	var ans strings.Builder
	ans.WriteString(strings.Repeat("9", x))
	num -= x
	if y > 0 {
		ans.WriteByte(byte('0' + y))
		num--
	}
	ans.WriteString(strings.Repeat("0", num))
	return ans.String()
}
