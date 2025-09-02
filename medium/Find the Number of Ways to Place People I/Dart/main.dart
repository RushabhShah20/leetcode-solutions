// Problem: Find the Number of Ways to Place People I
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/
class Solution {
  int numberOfPairs(List<List<int>> points) {
    int ans = 0;
    for (int i = 0; i < points.length; i++) {
      for (int j = 0; j < points.length; j++) {
        if (i != j) {
          int x1 = points[i][0],
              y1 = points[i][1],
              x2 = points[j][0],
              y2 = points[j][1];
          if ((x1 <= x2) && (y1 >= y2)) {
            bool z = true;
            for (int k = 0; k < points.length; k++) {
              int x = points[k][0], y = points[k][1];
              if (i != k && j != k) {
                if (((x1 <= x) && (x2 >= x)) && ((y1 >= y) && (y2 <= y))) {
                  z = false;
                  break;
                }
              }
            }
            if (z == true) {
              ans++;
            }
          }
        }
      }
    }
    return ans;
  }
}
