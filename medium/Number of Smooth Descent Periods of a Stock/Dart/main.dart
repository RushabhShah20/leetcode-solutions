// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
class Solution {
  int getDescentPeriods(List<int> prices) {
    int ans = 0, count = 1;
    List<int> a = new List.empty(growable: true);
    for (int i = 1; i < prices.length; i++) {
      if (prices[i] == prices[i - 1] - 1) {
        count++;
      } else {
        a.add(count);
        count = 1;
      }
    }
    a.add(count);
    for (int i = 0; i < a.length; i++) {
      ans += ((a[i]) * (a[i] + 1) ~/ 2);
    }
    return ans;
  }
}
