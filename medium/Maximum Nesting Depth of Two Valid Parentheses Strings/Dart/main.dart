// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution {
  List<int> maxDepthAfterSplit(String seq) {
    final int n = seq.length;
    List<int> ans = new List.filled(n, 0);
    for (int i = 0; i < n; i++) {
      ans[i] = (i & 1) ^ (seq[i] == '(' ? 1 : 0);
    }
    return ans;
  }
}
