// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int ans = 0, n = timeSeries.length;
        for (int i = 1; i < n; i++) {
            ans += Math.min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        ans += duration;
        return ans;
    }
}