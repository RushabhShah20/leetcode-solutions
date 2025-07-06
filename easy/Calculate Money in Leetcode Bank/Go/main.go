// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
func totalMoney(n int) int {
	var q int = n / 7
	var r int = n % 7
	var ans int = ((q * (q - 1)) / 2) * 7
	ans += q * 28
	ans += ((r * (r + 1)) / 2) + (q * r)
	return ans
}
