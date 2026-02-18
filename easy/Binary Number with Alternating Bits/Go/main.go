// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
func toBinary(n int) []int {
	var ans []int
	for n > 0 {
		ans = append(ans, n%2)
		n /= 2
	}
	slices.Reverse(ans)
	return ans
}
func isAlternating(ans []int) bool {
	for i := 0; i < len(ans); i++ {
		if i%2 == 0 {
			if ans[i] == 0 {
				return false
			}
		} else {
			if ans[i] == 1 {
				return false
			}
		}
	}
	return true
}
func hasAlternatingBits(n int) bool {
	var ans []int = toBinary(n)
	return isAlternating(ans)
}
