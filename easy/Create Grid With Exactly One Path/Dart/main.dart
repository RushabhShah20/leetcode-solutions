// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
class Solution {
  List<String> createGrid(int m, int n) {
    final List<List<String>> grid = List<List<String>>.generate(
      m,
      (int _) => List<String>.filled(n, '#'),
    );
    for (int i = 0; i < n; i++) {
      grid[0][i] = '.';
    }
    for (int i = 0; i < m; i++) {
      grid[i][n - 1] = '.';
    }
    final List<String> ans =
        grid.map((List<String> row) => row.join('')).toList();
    return ans;
  }
}
