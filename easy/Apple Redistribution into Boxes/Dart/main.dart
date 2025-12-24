// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
class Solution {
  int minimumBoxes(List<int> apple, List<int> capacity) {
    int ans = 0;
    capacity.sort((a, b) => b.compareTo(a));
    int total = 0;
    for (final int a in apple) {
      total += a;
    }
    for (final int c in capacity) {
      if (total >= c) {
        total -= c;
        ans++;
      } else {
        if (total != 0) {
          ans++;
        }
        break;
      }
    }
    return ans;
  }
}
