// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
class Solution {
  List<int> countServers(
    int n,
    List<List<int>> logs,
    int x,
    List<int> queries,
  ) {
    final int m = queries.length, k = logs.length;
    logs.sort((List<int> p, List<int> q) => p[1].compareTo(q[1]));
    final List<List<int>> a = List<List<int>>.generate(
      m,
      (int index) => List<int>.filled(2, 0),
    );
    for (int i = 0; i < m; i++) {
      a[i][0] = queries[i];
      a[i][1] = i;
    }
    a.sort((List<int> p, List<int> q) {
      if (p[0] != q[0]) {
        return p[0].compareTo(q[0]);
      }
      return p[1].compareTo(q[1]);
    });
    final List<int> ans = List<int>.filled(m, 0),
        b = List<int>.filled(n + 1, 0);
    int l = 0, r = 0, y = 0;
    for (int i = 0; i < m; i++) {
      while (r < k && logs[r][1] <= a[i][0]) {
        final int c = logs[r][0];
        r++;
        b[c]++;
        if (b[c] == 1) {
          y++;
        }
      }
      while (l < r && logs[l][1] < a[i][0] - x) {
        final int c = logs[l][0];
        l++;
        b[c]--;
        if (b[c] == 0) {
          y--;
        }
      }
      ans[a[i][1]] = n - y;
    }
    return ans;
  }
}
