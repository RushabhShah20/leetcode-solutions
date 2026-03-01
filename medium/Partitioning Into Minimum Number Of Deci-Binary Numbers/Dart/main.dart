// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution {
  int minPartitions(String n) {
    int ans = 0;
    for (int i = 0; i < n.length; i++) {
      ans = max(ans, n[i].codeUnitAt(0) - ('0').codeUnitAt(0));
    }
    return ans;
  }
}
