// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
class Solution {
  List<List<int>> rangeAddQueries(int n, List<List<int>> queries) {
    List<List<int>> prefix = new List.generate(
      n + 1,
      (i) => List.filled(n + 1, 0),
    );
    for (List<int> query in queries) {
      for (int i = query[0]; i <= query[2]; i++) {
        prefix[i][query[1]]++;
        prefix[i][query[3] + 1]--;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 1; j < n; j++) {
        prefix[i][j] += prefix[i][j - 1];
      }
    }
    List<List<int>> ans = new List.generate(n, (i) => List.filled(n, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        ans[i][j] = prefix[i][j];
      }
    }
    return ans;
  }
}
