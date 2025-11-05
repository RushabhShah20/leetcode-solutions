// Problem: Longest Unequal Adjacent Groups Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
class Solution {
  List<String> getLongestSubsequence(List<String> words, List<int> groups) {
    int n = groups.length;
    List<String> ans = new List.empty(growable: true);
    ans.add(words[0]);
    for (int i = 1; i < n; i++) {
      if (groups[i] != groups[i - 1]) {
        ans.add(words[i]);
      }
    }
    return ans;
  }
}
