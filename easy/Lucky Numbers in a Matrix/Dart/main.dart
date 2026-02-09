// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
class Solution {
  List<int> luckyNumbers(List<List<int>> matrix) {
    final int m = matrix.length, n = matrix[0].length;
    List<int> ans = new List.empty(growable: true);
    int col = -1;
    for (int i = 0; i < m; i++) {
      int minVal = 100001;
      int maxVal = 0;
      for (int j = 0; j < n; j++) {
        if (matrix[i][j] < minVal) {
          minVal = matrix[i][j];
          col = j;
        }
      }
      for (int k = 0; k < m; k++) {
        if (matrix[k][col] > maxVal) {
          maxVal = matrix[k][col];
        }
      }
      if (minVal == maxVal) {
        ans.add(minVal);
      }
    }
    return ans;
  }
}
