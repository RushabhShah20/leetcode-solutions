// Problem: Maximum Number of Balloons
// Link to the problem: https://leetcode.com/problems/maximum-number-of-balloons/
class Solution {
  int maxNumberOfBalloons(String text) {
    final int n = text.length;
    int ans = 100000;
    List<int> a = new List.filled(26, 0);
    for (int i = 0; i < n; i++) {
      a[text.codeUnitAt(i) - ('a').codeUnitAt(0)]++;
    }
    ans = min(ans, a[1]);
    ans = min(ans, a[0]);
    ans = min(ans, a[11] ~/ 2);
    ans = min(ans, a[14] ~/ 2);
    ans = min(ans, a[13]);
    return ans;
  }
}
