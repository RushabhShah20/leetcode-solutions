// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars/
class Solution {
    public int maxIceCream(int[] costs, int coins) {
        final int n = costs.length;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = Math.max(mx, costs[i]);
        }
        int[] a = new int[mx + 1];
        for (int i = 0; i < n; i++) {
            a[costs[i]]++;
        }
        int ans = 0;
        for (int i = 1; i <= mx; i++) {
            if (a[i] == 0) {
                continue;
            }
            if (coins < i) {
                break;
            }
            final int x = Math.min(a[i], coins / i);
            coins -= i * x;
            ans += x;
        }
        return ans;
    }
}
