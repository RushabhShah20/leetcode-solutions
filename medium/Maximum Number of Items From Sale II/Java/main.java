// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
class Solution {
    public int maximumSaleItems(int[][] items, int budget) {
        final int n = items.length;
        Arrays.sort(items, (int[] p, int[] q) -> Integer.compare(p[1], q[1]));
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = Math.max(mx, items[i][0]);
        }
        int[] a = new int[mx + 1];
        for (int i = 0; i < n; i++) {
            a[items[i][0]]++;
        }
        for (int i = 1; i <= mx; i++) {
            if (a[i] > 0) {
                for (int j = i << 1; j <= mx; j += i) {
                    a[i] += a[j];
                }
            }
        }
        final int mn = items[0][1];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            final int x = items[i][0];
            final int y = items[i][1];
            if (y - mn > mn) {
                break;
            }
            final int b = a[x] - 1;
            final int c = Math.min(b, budget / y);
            ans += c << 1;
            budget -= c * y;
        }
        ans += budget / mn;
        return ans;
    }
}