// Problem: Final Prices With a Special Discount in a Shop
// Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
func finalPrices(prices []int) []int {
	var ans []int = make([]int, len(prices))
	for i := 0; i < len(prices); i++ {
		ans[i] = prices[i]
		for j := i + 1; j < len(prices); j++ {
			if prices[j] <= prices[i] {
				ans[i] = prices[i] - prices[j]
				break
			}
		}
	}
	return ans
}
