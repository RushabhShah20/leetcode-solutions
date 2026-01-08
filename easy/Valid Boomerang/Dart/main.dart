// Problem: Valid Boomerang
// Link to the problem: https://leetcode.com/problems/valid-boomerang/
class Solution {
  bool isBoomerang(List<List<int>> points) {
    final int x1 = points[0][0],
        x2 = points[1][0],
        x3 = points[2][0],
        y1 = points[0][1],
        y2 = points[1][1],
        y3 = points[2][1];
    if ((x1 == x2 && y1 == y2) ||
        (x2 == x3 && y2 == y3) ||
        (x3 == x1 && y3 == y1)) {
      return false;
    } else {
      if ((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1)) {
        return true;
      } else {
        return false;
      }
    }
  }
}
