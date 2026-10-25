// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
class Solution {
  bool dfs(
    final int x,
    final int y,
    final int n,
    final int m,
    List<List<int>> grid,
  ) {
    if (x < 0 || x >= n || y < 0 || y >= m) {
      return false;
    }
    if (grid[x][y] == 1) {
      return true;
    }
    grid[x][y] = 1;
    final bool a = dfs(x - 1, y, n, m, grid);
    final bool b = dfs(x + 1, y, n, m, grid);
    final bool c = dfs(x, y - 1, n, m, grid);
    final bool d = dfs(x, y + 1, n, m, grid);
    final bool ans = a && b && c && d;
    return ans;
  }

  int closedIsland(List<List<int>> grid) {
    final int n = grid.length, m = grid[0].length;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 0) {
          if (dfs(i, j, n, m, grid)) {
            ans++;
          }
        }
      }
    }
    return ans;
  }
}
