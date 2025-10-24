// Problem: Average Waiting Time
// Link to the problem: https://leetcode.com/problems/average-waiting-time/
class Solution {
  double averageWaitingTime(List<List<int>> customers) {
    int ans = 0, total = 0, n = customers.length;
    total += (customers[0][0] + customers[0][1]);
    ans += customers[0][1];
    for (int i = 1; i < n; i++) {
      if (total >= customers[i][0]) {
        total += customers[i][1];
        ans += ((total - customers[i][0]));
      } else {
        total = customers[i][0] + customers[i][1];
        ans += customers[i][1];
      }
    }
    return ((ans) / (n));
  }
}
