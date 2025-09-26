// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
class Solution {
  List<List<int>> largeGroupPositions(String s) {
    List<List<int>> ans = new List.empty(growable: true);
    int count = 1;
    for (int i = 1; i < s.length; i++) {
      if (s[i] == s[i - 1]) {
        count++;
      } else {
        if (count >= 3) {
          ans.add([i - count, i - 1]);
        }
        count = 1;
      }
    }
    if (count >= 3) {
      ans.add([(s.length - count), (s.length - 1)]);
    }
    return ans;
  }
}
