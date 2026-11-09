// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
import 'package:collection/collection.dart';

class Solution {
  List<int> busiestServers(int k, List<int> arrival, List<int> load) {
    final int n = arrival.length;
    final List<int> a = List<int>.filled(k, 0);
    final PriorityQueue<int> b = HeapPriorityQueue<int>();
    final PriorityQueue<List<int>> c = HeapPriorityQueue<List<int>>(
      (List<int> p, List<int> q) =>
          p[0] != q[0] ? p[0].compareTo(q[0]) : p[1].compareTo(q[1]),
    );
    for (int i = 0; i < k; ++i) {
      b.add(i);
    }
    for (int i = 0; i < n; ++i) {
      final int x = arrival[i];
      while (c.isNotEmpty && c.first[0] <= x) {
        final List<int> y = c.removeFirst();
        final int j = ((y[1] - i) % k + k) % k + i;
        b.add(j);
      }
      if (b.isNotEmpty) {
        final int j = b.first % k;
        b.removeFirst();
        c.add(<int>[x + load[i], j]);
        a[j]++;
      }
    }
    final List<int> ans = <int>[];
    int mx = 0;
    for (int i = 0; i < k; i++) {
      mx = max(mx, a[i]);
    }
    for (int i = 0; i < k; ++i) {
      if (a[i] == mx) {
        ans.add(i);
      }
    }
    return ans;
  }
}
