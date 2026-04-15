// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
class Solution {
  int closestTarget(List<String> words, String target, int startIndex) {
    final int n = words.length;
    int ans = n;
    for (int i = 0; i < n; i++) {
      if (words[i] == target) {
        final int x = (i - startIndex).abs();
        ans = min(ans, min(x, n - x));
      }
    }
    return ans == n ? -1 : ans;
  }
}
