// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
func minimumCost(cost []int) int {
	var n int = len(cost)
	var ans int = 0
	sort.Ints(cost)
	for i := n - 1; i >= 0; i -= 3 {
		if i-1 >= 0 {
			ans += cost[i] + cost[i-1]
		} else {
			ans += cost[i]
		}
	}
	return ans
}
