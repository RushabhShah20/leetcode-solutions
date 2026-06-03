// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
int solve(int n, int m, const int *a1, const int *d1, const int *a2, const int *d2)
{
    int x = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        x = fmin(x, a1[i] + d1[i]);
    }
    int y = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        y = fmin(y, fmax(a2[i], x) + d2[i]);
    }
    return y;
}

int earliestFinishTime(int *landStartTime, int landStartTimeSize, int *landDuration, int landDurationSize, int *waterStartTime, int waterStartTimeSize, int *waterDuration, int waterDurationSize)
{
    const int n = landDurationSize, m = waterDurationSize;
    const int x = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
    const int y = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
    const int ans = fmin(x, y);
    return ans;
}