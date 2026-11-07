// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
class Solution {
    public int[] assignTasks(int[] servers, int[] tasks) {
        final int m = servers.length, n = tasks.length;
        PriorityQueue<long[]> a = new PriorityQueue<long[]>((long[] p, long[] q) -> {
            if (p[0] != q[0]) {
                return Long.compare(p[0], q[0]);
            }
            return Long.compare(p[1], q[1]);
        });
        PriorityQueue<int[]> b = new PriorityQueue<int[]>((int[] p, int[] q) -> {
            if (p[0] != q[0]) {
                return Integer.compare(p[0], q[0]);
            }
            return Integer.compare(p[1], q[1]);
        });
        for (int i = 0; i < m; i++) {
            b.add(new int[] { servers[i], i });
        }
        int[] ans = new int[n];
        long x = 0L;
        for (int i = 0; i < n; i++) {
            x = Math.max(x, (long) i);
            while (!a.isEmpty() && a.peek()[0] <= x) {
                long[] y = a.poll();
                b.add(new int[] { servers[(int) y[1]], (int) y[1] });
            }
            if (b.isEmpty()) {
                x = a.peek()[0];
                while (!a.isEmpty() && a.peek()[0] <= x) {
                    long[] y = a.poll();
                    b.add(new int[] { servers[(int) y[1]], (int) y[1] });
                }
            }
            int[] z = b.poll();
            ans[i] = z[1];
            a.add(new long[] { x + tasks[i], z[1] });
        }
        return ans;
    }
}