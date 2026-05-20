// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
class Solution {
  List<int> findThePrefixCommonArray(List<int> A, List<int> B) {
    final int n = A.length;
    List<int> m = new List.filled(n + 1, 0), ans = new List.filled(n, 0);
    int x = 0;
    for (int i = 0; i < n; i++) {
      m[A[i]]++;
      if (m[A[i]] == 2) {
        x++;
      }
      m[B[i]]++;
      if (m[B[i]] == 2) {
        x++;
      }
      ans[i] = x;
    }
    return ans;
  }
}
