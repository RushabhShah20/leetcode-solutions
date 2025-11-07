// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int n = points.length, ans = 0;
        for (int i = 1; i < n; i++) {
            ans += Math.max(Math.abs(points[i - 1][1] - points[i][1]), Math.abs(points[i - 1][0] - points[i][0]));
        }
        return ans;
    }
}