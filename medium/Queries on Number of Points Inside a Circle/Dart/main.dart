// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
class Solution {
  List<int> countPoints(List<List<int>> points, List<List<int>> queries) {
    List<int> ans = new List.filled(queries.length, 0);
    for (int i = 0; i < queries.length; i++) {
      for (int j = 0; j < points.length; j++) {
        if ((queries[i][2] * queries[i][2]) >=
            ((queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0]) +
                (queries[i][1] - points[j][1]) *
                    (queries[i][1] - points[j][1]))) {
          ans[i]++;
        }
      }
    }
    return ans;
  }
}
