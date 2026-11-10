// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
func climbStairs(n int, costs []int) int {
	var a int = 0
	var b int = 0
	var c int = 0
	for i := 0; i < n; i++ {
		var d int = min(a+9, min(b+4, c+1)) + costs[i]
		a = b
		b = c
		c = d
	}
	var ans int = c
	return ans
}
