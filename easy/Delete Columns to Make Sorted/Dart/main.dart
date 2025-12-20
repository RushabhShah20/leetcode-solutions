// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
class Solution {
  int minDeletionSize(List<String> strs) {
    final int n = strs.length, m = strs[0].length;
    int ans = 0;
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < n - 1; i++) {
        if ((strs[i].codeUnitAt(j)) > (strs[i + 1].codeUnitAt(j))) {
          ans++;
          break;
        }
      }
    }
    return ans;
  }
}
