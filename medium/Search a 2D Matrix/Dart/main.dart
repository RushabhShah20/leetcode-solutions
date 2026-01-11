// Problem: Search a 2D Matrix
// Link to the problem: https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
  bool searchMatrix(List<List<int>> matrix, int target) {
    final int m = matrix.length, n = matrix[0].length;
    int i = 0, j = m * n - 1;
    while (i <= j) {
      int k = (i + j) ~/ 2;
      int val = matrix[k ~/ n][k % n];
      if (val == target) {
        return true;
      } else if (val < target) {
        i = k + 1;
      } else {
        j = k - 1;
      }
    }
    return false;
  }
}
