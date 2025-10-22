// Problem: Maximum Score After Splitting a String
// Link to the problem: https://leetcode.com/problems/maximum-score-after-splitting-a-string/
class Solution {
  int maxScore(String s) {
    int ans = 0;
    List<int> pref = new List.filled(s.length, 0);
    if (s[0] == '1') {
      pref[0] = 0;
    } else {
      pref[0] = 1;
    }
    for (int i = 1; i < s.length; i++) {
      if (s[i] == '1') {
        pref[i] = pref[i - 1];
      } else {
        pref[i] = pref[i - 1] + 1;
      }
    }
    for (int i = 0; i < s.length - 1; i++) {
      int score =
          (pref[i] + ((s.length - i - 1) - (pref[s.length - 1] - pref[i])));
      ans = max(ans, score);
    }
    return ans;
  }
}
