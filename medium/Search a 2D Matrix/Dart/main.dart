// Problem: Search a 2D Matrix
// Link to the problem: https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
  bool searchMatrix(List<List<int>> matrix, int target) {
    List<int> ans = new List.empty(growable: true);
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[0].length; j++) {
        ans.add(matrix[i][j]);
      }
    }
    return ans.indexOf(target) == -1 ? false : true;
  }
}
