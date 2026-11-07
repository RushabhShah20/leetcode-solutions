// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
import 'package:collection/collection.dart';

class Solution {
  List<int> assignTasks(List<int> servers, List<int> tasks) {
    final int m = servers.length, n = tasks.length;
    final PriorityQueue<List<int>> a = PriorityQueue<List<int>>((
      List<int> p,
      List<int> q,
    ) {
      if (p[0] != q[0]) {
        return p[0].compareTo(q[0]);
      }
      return p[1].compareTo(q[1]);
    });
    final PriorityQueue<List<int>> b = PriorityQueue<List<int>>((
      List<int> p,
      List<int> q,
    ) {
      if (p[0] != q[0]) {
        return p[0].compareTo(q[0]);
      }
      return p[1].compareTo(q[1]);
    });
    for (int i = 0; i < m; i++) {
      b.add(<int>[servers[i], i]);
    }
    final List<int> ans = List<int>.filled(n, 0);
    int x = 0;
    for (int i = 0; i < n; i++) {
      x = max(x, i);
      while (a.isNotEmpty && a.first[0] <= x) {
        final List<int> y = a.removeFirst();
        b.add(<int>[servers[y[1]], y[1]]);
      }
      if (b.isEmpty) {
        x = a.first[0];
        while (a.isNotEmpty && a.first[0] <= x) {
          final List<int> y = a.removeFirst();
          b.add(<int>[servers[y[1]], y[1]]);
        }
      }
      final List<int> z = b.removeFirst();
      ans[i] = z[1];
      a.add(<int>[x + tasks[i], z[1]]);
    }
    return ans;
  }
}
