// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
class Solution {
  int bestClosingTime(String customers) {
    int n = customers.length, minPenalty = 0, currPenalty = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      if (customers[i] == 'Y') {
        currPenalty--;
      } else {
        currPenalty++;
      }
      if (currPenalty < minPenalty) {
        minPenalty = currPenalty;
        ans = i + 1;
      }
    }
    return ans;
  }
}
