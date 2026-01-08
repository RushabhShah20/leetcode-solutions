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
	var maxVal int = 0
	var minVal int = 1001
	for _, num := range nums {
		maxVal = max(maxVal, num)
		minVal = min(minVal, num)
	}
	var ans int = gcd(maxVal, minVal)
	return ans
}
