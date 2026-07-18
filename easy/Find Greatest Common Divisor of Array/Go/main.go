// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}
func findGCD(nums []int) int {
	var n int = len(nums)
	var mx int = 0
	var mn int = 1001
	for i := 0; i < n; i++ {
		mx = max(mx, nums[i])
		mn = min(mn, nums[i])
	}
	var ans int = gcd(mx, mn)
	return ans
}
