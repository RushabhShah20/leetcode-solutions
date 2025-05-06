// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
func maxIceCream(costs []int, coins int) int {
	var ans int = 0
	var sum int = 0
	sort.Ints(costs)
	for i := 0; i < len(costs); i++ {
		sum += costs[i]
		if sum <= coins {
			ans++
		} else {
			break
		}
	}
	return ans
}
