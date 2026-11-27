// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
class Solution {
    public int maximumSaleItems(int[][] items, int budget) {
        final int n = items.length;
        int[] a = new int[budget + 1];
        int x = 1000000000;
        for (int i = 0; i < n; i++) {
            final int y = items[i][0], z = items[i][1];
            x = Math.min(x, z);
            int b = 0;
            for (int j = 0; j < n; j++) {
                if (items[j][0] % y == 0) {
                    b++;
                }
            }
            for (int j = budget; j >= z; j--) {
                a[j] = Math.max(a[j], a[j - z] + b);
            }
        }
        int ans = 0;
        for (int i = 0; i <= budget; i++) {
            ans = Math.max(ans, a[i] + (budget - i) / x);
        }
        return ans;
    }
}