// Problem: Equal Score Substrings
// Link to the problem: https://leetcode.com/problems/equal-score-substrings/
class Solution {
  bool scoreBalance(String s) {
    List<int> prefix = new List.filled(s.length, 0);
    prefix[0] = (s.codeUnitAt(0) - 97) + 1;
    for (int i = 1; i < s.length; i++) {
      prefix[i] = prefix[i - 1] + (s.codeUnitAt(i) - 97 + 1);
    }
    List<int> suffix = new List.filled(s.length, 0);
    suffix[s.length - 1] = (s.codeUnitAt(s.length - 1) - 97) + 1;
    for (int i = s.length - 2; i >= 0; i--) {
      suffix[i] = suffix[i + 1] + (s.codeUnitAt(i) - 97 + 1);
    }
    for (int i = 0; i < s.length - 1; i++) {
      if (prefix[i] == suffix[i + 1]) {
        return true;
      }
    }
    return false;
  }
}
