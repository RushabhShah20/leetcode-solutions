// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
func binaryGap(n int) int {
	var ans int = 0
	var x int = 0
	var y int = -1
	for n > 0 {
		if n%2 == 1 {
			if y != -1 {
				ans = max(ans, x-y)
			}
			y = x
		}
		n /= 2
		x++
	}
	return ans
}
