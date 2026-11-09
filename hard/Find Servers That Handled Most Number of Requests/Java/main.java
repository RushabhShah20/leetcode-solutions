// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
class Solution {
    public List<Integer> busiestServers(int k, int[] arrival, int[] load) {
        final int n = arrival.length;
        int[] a = new int[k];
        PriorityQueue<Integer> b = new PriorityQueue<Integer>();
        PriorityQueue<int[]> c = new PriorityQueue<int[]>(
                (int[] p, int[] q) -> p[0] != q[0] ? Integer.compare(p[0], q[0]) : Integer.compare(p[1], q[1]));
        for (int i = 0; i < k; ++i) {
            b.add(i);
        }
        for (int i = 0; i < n; ++i) {
            final int x = arrival[i];
            while (!c.isEmpty() && c.peek()[0] <= x) {
                final int[] y = c.poll();
                final int j = ((y[1] - i) % k + k) % k + i;
                b.add(j);
            }
            if (!b.isEmpty()) {
                final int j = b.peek() % k;
                b.poll();
                c.add(new int[] { x + load[i], j });
                a[j]++;
            }
        }
        List<Integer> ans = new ArrayList<Integer>();
        int mx = 0;
        for (int i = 0; i < k; i++) {
            mx = Math.max(mx, a[i]);
        }
        for (int i = 0; i < k; ++i) {
            if (a[i] == mx) {
                ans.add(i);
            }
        }
        return ans;
    }
}