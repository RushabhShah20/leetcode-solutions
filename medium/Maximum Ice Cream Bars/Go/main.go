// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
func maxIceCream(costs []int, coins int) int {
	var n int = len(costs)
	var mx int = 0
	for i := 0; i < n; i++ {
		mx = max(mx, costs[i])
	}
	var a []int = make([]int, mx+1)
	for i := 0; i < n; i++ {
		a[costs[i]]++
	}
	var ans int = 0
	for i := 1; i <= mx; i++ {
		if a[i] == 0 {
			continue
		}
		if coins < i {
			break
		}
		var x int = min(a[i], coins/i)
		coins -= i * x
		ans += x
	}
	return ans
}
