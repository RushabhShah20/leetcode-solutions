// Problem: Two Furthest Houses With Different Colors
// Link to the problem: https://leetcode.com/problems/two-furthest-houses-with-different-colors/
func abs(n int) int {
	if n >= 0 {
		return n
	} else {
		return -n
	}
}
func maxDistance(colors []int) int {
	var n int = len(colors)
	var ans int = 0
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if colors[i] != colors[j] {
				ans = max(abs(i-j), ans)
			}
		}
	}
	return ans
}
