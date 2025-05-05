// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
func split(n int) []int {
	var res []int
	for i := n; i > 0; i /= 10 {
		res = append(res, i%10)
	}
	return res
}
func alternateDigitSum(n int) int {
	var ans int = 0
	var digits []int = split(n)
	for i := len(digits) - 1; i >= 0; i-- {
		if len(digits)%2 == 0 {
			if i%2 != 0 {
				ans += digits[i]
			} else {
				ans -= digits[i]
			}
		} else {
			if i%2 == 0 {
				ans += digits[i]
			} else {
				ans -= digits[i]
			}
		}
	}
	return ans
}
