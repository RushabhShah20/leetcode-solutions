// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
    fun minTimeToVisitAllPoints(points: Array<IntArray>): Int {
        val n:Int = points.size
        var ans:Int = 0;
        for (i in 1 until n)
        {
            ans += maxOf(kotlin.math.abs(points[i - 1][1] - points[i][1]), kotlin.math.abs(points[i - 1][0] - points[i][0]));
        }
        return ans;
    }
}