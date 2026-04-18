// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
func rev(n int) int {
	var ans int = 0
	for n > 0 {
		ans = ans*10 + n%10
		n /= 10
	}
	return ans
}
func abs(n int) int {
	if n >= 0 {
		return n
	} else {
		return -n
	}
}
func mirrorDistance(n int) int {
	var m int = rev(n)
	var ans int = abs(m - n)
	return ans
}
