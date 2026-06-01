// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
class Solution {
    public int minimumCost(int[] cost) {
        final int n = cost.length;
        int ans = 0;
        Arrays.sort(cost);
        for (int i = n - 1; i >= 0; i -= 3) {
            if (i - 1 >= 0) {
                ans += cost[i] + cost[i - 1];
            } else {
                ans += cost[i];
            }
        }
        return ans;
    }
}