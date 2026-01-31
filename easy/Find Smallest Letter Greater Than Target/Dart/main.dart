// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution {
  String nextGreatestLetter(List<String> letters, String target) {
    final int n = letters.length;
    int l = 0, r = n - 1;
    String ans = letters[0];
    while (l <= r) {
      final int m = l + (r - l) ~/ 2;
      if (letters[m].codeUnitAt(0) > target.codeUnitAt(0)) {
        ans = letters[m];
        r = m - 1;
      } else {
        l = m + 1;
      }
    }
    return ans;
  }
}
