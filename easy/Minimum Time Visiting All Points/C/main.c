// Problem: Minimum Time Visiting All Points
// Link to the problem: https://leetcode.com/problems/minimum-time-visiting-all-points/
int minTimeToVisitAllPoints(int **points, int pointsSize, int *pointsColSize)
{
    int n = pointsSize, ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += fmax(abs(points[i - 1][1] - points[i][1]), abs(points[i - 1][0] - points[i][0]));
    }
    return ans;
}