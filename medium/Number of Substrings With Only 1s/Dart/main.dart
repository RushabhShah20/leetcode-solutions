// Problem: Number of Substrings With Only 1s
// Link to the problem: https://leetcode.com/problems/number-of-substrings-with-only-1s/
class Solution {
  int numSub(String s) {
    List<int> x = new List.empty(growable: true);
    int y = 0;
    for (int i = 0; i < s.length; i++) {
      if (s[i] == '1') {
        y++;
      } else {
        x.add(y);
        y = 0;
      }
    }
    if (y != 0) {
      x.add(y);
    }
    int ans = 0, mod = 1000000007;
    for (int i = 0; i < x.length; i++) {
      ans += ((((x[i]) * (x[i] + 1)) ~/ 2) % mod);
    }
    return ans;
  }
}
