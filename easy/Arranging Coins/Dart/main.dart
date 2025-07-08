// Problem: Arranging Coins
// Link to the problem: https://leetcode.com/problems/arranging-coins/
class Solution {
  int arrangeCoins(int n) {
    int low = 0, high = n;
    int ans = 0;
    while (low <= high) {
      int mid = low + (high - low) ~/ 2;
      int sum = mid * (mid + 1) ~/ 2;
      if (sum == n) {
        return mid;
      } else if (sum < n) {
        ans = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return ans;
  }
}
