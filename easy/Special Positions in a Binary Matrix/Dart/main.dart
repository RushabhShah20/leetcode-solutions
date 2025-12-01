// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
class Solution {
  int numSpecial(List<List<int>> mat) {
    int m = mat.length, n = mat[0].length, ans = 0;
    List<int> rows = new List.filled(m, 0), cols = new List.filled(n, 0);
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (mat[i][j] == 1) {
          rows[i]++;
          cols[j]++;
        }
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1) {
          ans++;
        }
      }
    }
    return ans;
  }
}
