// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
class Solution {
  int countCoveredBuildings(int n, List<List<int>> buildings) {
    List<int> maxRow = new List.filled(n + 1, 0),
        minRow = new List.filled(n + 1, n + 1),
        maxCol = new List.filled(n + 1, 0),
        minCol = new List.filled(n + 1, n + 1);
    for (final List<int> building in buildings) {
      int x = building[0], y = building[1];
      maxRow[y] = max(maxRow[y], x);
      minRow[y] = min(minRow[y], x);
      maxCol[x] = max(maxCol[x], y);
      minCol[x] = min(minCol[x], y);
    }
    int ans = 0;
    for (final List<int> building in buildings) {
      int x = building[0], y = building[1];
      if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x]) {
        ans++;
      }
    }
    return ans;
  }
}
