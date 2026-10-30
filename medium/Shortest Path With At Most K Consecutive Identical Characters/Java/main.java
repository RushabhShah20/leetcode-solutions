// Problem: Shortest Path With At Most K Consecutive Identical Characters
// Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
class Solution {
    public int shortestPath(int n, int[][] edges, String labels, int k) {
        List<List<int[]>> adj = new ArrayList<List<int[]>>();
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<int[]>());
        }
        for (int[] edge : edges) {
            adj.get(edge[0]).add(new int[] { edge[1], edge[2] });
        }
        int[][] dist = new int[n][k + 1];
        for (int[] row : dist) {
            Arrays.fill(row, Integer.MAX_VALUE);
        }
        dist[0][1] = 0;
        PriorityQueue<int[]> pq = new PriorityQueue<int[]>((int[] x, int[] y) -> {
            if (x[0] != y[0]) {
                return Integer.compare(x[0], y[0]);
            }
            if (x[1] != y[1]) {
                return Integer.compare(x[1], y[1]);
            }
            return Integer.compare(x[2], y[2]);
        });
        pq.add(new int[] { 0, 0, 1 });
        while (!pq.isEmpty()) {
            final int[] a = pq.poll();
            if (a[0] > dist[a[1]][a[2]]) {
                continue;
            }
            if (a[1] == n - 1) {
                return a[0];
            }
            for (final int[] i : adj.get(a[1])) {
                final int b = labels.charAt(i[0]) == labels.charAt(a[1]) ? a[2] + 1 : 1;
                if (b <= k) {
                    if (a[0] + i[1] < dist[i[0]][b]) {
                        dist[i[0]][b] = a[0] + i[1];
                        pq.add(new int[] { dist[i[0]][b], i[0], b });
                    }
                }
            }
        }
        return -1;
    }
}