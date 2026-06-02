// Problem: Earliest Finish Time for Land and Water Rides II
// Link to the problem: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/
class Solution
{
public:
    int solve(const int n, const int m, const vector<int> &a1, const vector<int> &d1, const vector<int> &a2, const vector<int> &d2)
    {
        int x = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            x = min(x, a1[i] + d1[i]);
        }
        int y = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            y = min(y, max(a2[i], x) + d2[i]);
        }
        return y;
    }
    int earliestFinishTime(vector<int> &landStartTime, vector<int> &landDuration, vector<int> &waterStartTime, vector<int> &waterDuration)
    {
        const int n = landDuration.size(), m = waterDuration.size();
        const int x = solve(n, m, landStartTime, landDuration, waterStartTime, waterDuration);
        const int y = solve(m, n, waterStartTime, waterDuration, landStartTime, landDuration);
        const int ans = min(x, y);
        return ans;
    }
};