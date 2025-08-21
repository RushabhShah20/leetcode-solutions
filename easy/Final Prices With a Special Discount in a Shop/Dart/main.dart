// Problem: Final Prices With a Special Discount in a Shop
// Link to the problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
class Solution {
  List<int> finalPrices(List<int> prices) {
    List<int> ans = new List.filled(prices.length, 0);
    for (int i = 0; i < prices.length; i++) {
      ans[i] = prices[i];
      for (int j = i + 1; j < prices.length; j++) {
        if (prices[j] <= prices[i]) {
          ans[i] = prices[i] - prices[j];
          break;
        }
      }
    }
    return ans;
  }
}
