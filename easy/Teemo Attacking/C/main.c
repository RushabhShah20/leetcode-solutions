// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
int findPoisonedDuration(int *timeSeries, int timeSeriesSize, int duration)
{
    int ans = 0, n = timeSeriesSize;
    for (int i = 1; i < n; i++)
    {
        ans += fmin(duration, timeSeries[i] - timeSeries[i - 1]);
    }
    ans += duration;
    return ans;
}