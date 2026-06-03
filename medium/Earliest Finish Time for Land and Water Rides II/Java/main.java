// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
class Solution {
    int solve(final int n, final int m, final int[] a1, final int[] d1, final int[] a2, final int[] d2) {
        int x = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            x = Math.min(x, a1[i] + d1[i]);
        }
        int y = Integer.MAX_VALUE;
        for (int i = 0; i < m; i++) {
            y = Math.min(y, Math.max(a2[i], x) + d2[i]);
        }
        return y;
    }

    public int earliestFinishTime(int[] landStartTime, int[] landDuration, int[] waterStartTime, int[] waterDuration) {
        final int n = landDuration.length, m = waterDuration.length;
        final int x = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
        final int y = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
        final int ans = Math.min(x, y);
        return ans;
    }
}