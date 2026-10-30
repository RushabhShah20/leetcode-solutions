// Problem: Shortest Path With At Most K Consecutive Identical Characters
// Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
import 'dart:collection';

class Solution {
  int shortestPath(int n, List<List<int>> edges, String labels, int k) {
    final List<List<List<int>>> adj = List<List<List<int>>>.generate(
      n,
      (int idx) => <List<int>>[],
    );
    for (final List<int> edge in edges) {
      adj[edge[0]].add(<int>[edge[1], edge[2]]);
    }
    const int intMax = 2147483647;
    final List<List<int>> dist = List<List<int>>.generate(
      n,
      (int idx) => List<int>.filled(k + 1, intMax),
    );
    dist[0][1] = 0;
    final SplayTreeSet<List<int>> pq = SplayTreeSet<List<int>>((
      List<int> x,
      List<int> y,
    ) {
      if (x[0] != y[0]) {
        return x[0].compareTo(y[0]);
      }
      if (x[1] != y[1]) {
        return x[1].compareTo(y[1]);
      }
      return x[2].compareTo(y[2]);
    });
    pq.add(<int>[0, 0, 1]);
    while (pq.isNotEmpty) {
      final List<int> a = pq.first;
      pq.remove(a);
      if (a[0] > dist[a[1]][a[2]]) {
        continue;
      }
      if (a[1] == n - 1) {
        return a[0];
      }
      for (final List<int> i in adj[a[1]]) {
        final int b = labels[i[0]] == labels[a[1]] ? a[2] + 1 : 1;
        if (b <= k) {
          if (a[0] + i[1] < dist[i[0]][b]) {
            dist[i[0]][b] = a[0] + i[1];
            pq.add(<int>[dist[i[0]][b], i[0], b]);
          }
        }
      }
    }
    return -1;
  }
}
