// Problem: Strictly Palindromic Number
// Link to the problem: https://leetcode.com/problems/strictly-palindromic-number/
func nInary(n int64, b int64) int64 {
	var res int64 = 0
	var mul int64 = 1
	for i := n; i > 0; i /= b {
		res += i % b * mul
		mul *= 10
	}
	return res
}
func isPalindrome(n int64) bool {
	var rev int64 = 0
	var org int64 = n
	for i := n; i > 0; i /= 10 {
		rev = rev*10 + i%10
	}
	return rev == org
}
func isStrictlyPalindromic(n int) bool {
	var ans bool = false
	for i := 2; i <= n-2; i++ {
		var num = nInary(int64(n), int64(i))
		if isPalindrome(num) {
			ans = true
		} else {
			ans = false
			break
		}
	}
	return ans
}
