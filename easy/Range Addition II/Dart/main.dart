// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
class Solution {
  int maxCount(int m, int n, List<List<int>> ops) {
    for (List<int> op in ops) {
      m = min(m, op[0]);
      n = min(n, op[1]);
    }
    int ans = m * n;
    return ans;
  }
}
