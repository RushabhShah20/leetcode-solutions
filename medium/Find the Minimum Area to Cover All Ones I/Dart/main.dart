// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
class Solution {
  int minimumArea(List<List<int>> grid) {
    int m = grid.length, n = grid[0].length;
    int a = 0x7FFFFFFFFFFFFFFF,
        b = 0x7FFFFFFFFFFFFFFF,
        c = -0x8000000000000000,
        d = -0x8000000000000000;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
          a = min(a, i);
          b = min(b, j);
          c = max(c, i);
          d = max(d, j);
        }
      }
    }
    return (c - a + 1) * (d - b + 1);
  }
}
