// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars
class Solution {
    public int maxIceCream(int[] costs, int coins) {
        int ans = 0, sum = 0;
        Arrays.sort(costs);
        for (int i = 0; i < costs.length; i++) {
            sum += costs[i];
            if (sum <= coins) {
                ans++;
            } else {
                break;
            }
        }
        return ans;
    }
}
