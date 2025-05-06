// Problem: Best Time to Buy and Sell Stock
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
func maxProfit(prices []int) int {
	var ans int = 0
	var minPrice int = math.MaxInt
	for i := 0; i < len(prices); i++ {
		minPrice = min(minPrice, prices[i])
		ans = max(ans, prices[i]-minPrice)
	}
	return ans
}
