// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
class Solution {
  List<List<int>> generate(int numRows) {
    List<List<int>> ans = new List.empty(growable: true);
    if (numRows <= 0) {
      return ans;
    }
    List<int> pre = new List.empty(growable: true);
    pre.add(1);
    ans.add(pre);
    for (int i = 2; i <= numRows; i++) {
      List<int> cur = new List.empty(growable: true);
      cur.add(1);
      for (int j = 0; j < pre.length - 1; j++) {
        cur.add(pre[j] + pre[j + 1]);
      }
      cur.add(1);
      ans.add(cur);
      pre = cur;
    }
    return ans;
  }
}
