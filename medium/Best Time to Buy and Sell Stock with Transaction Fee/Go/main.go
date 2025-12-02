// Problem: Best Time to Buy and Sell Stock with Transaction Fee
// Link to the problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
func maxProfit(prices []int, fee int) int {
	var buy int = -50001
	var sell int = 0
	for _, price := range prices {
		buy = max(buy, sell-price)
		sell = max(sell, buy+price-fee)
	}
	var ans int = sell
	return ans
}
