// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
class Solution {
    public int[] countServers(int n, int[][] logs, int x, int[] queries) {
        final int m = queries.length, k = logs.length;
        Arrays.sort(logs, (int[] p, int[] q) -> Integer.compare(p[1], q[1]));
        int[][] a = new int[m][2];
        for (int i = 0; i < m; i++) {
            a[i][0] = queries[i];
            a[i][1] = i;
        }
        Arrays.sort(a, (int[] p, int[] q) -> {
            if (p[0] != q[0]) {
                return Integer.compare(p[0], q[0]);
            }
            return Integer.compare(p[1], q[1]);
        });
        int[] ans = new int[m], b = new int[n + 1];
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