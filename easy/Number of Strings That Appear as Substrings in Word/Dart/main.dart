// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
class Solution {
  int numOfStrings(List<String> patterns, String word) {
    final int n = patterns.length;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (word.contains(patterns[i])) {
        ans++;
      }
    }
    return ans;
  }
}
