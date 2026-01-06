// Problem: Minimum Time Difference
// Link to the problem: https://leetcode.com/problems/minimum-time-difference/
class Solution
{
public:
    int findMinDifference(vector<string> &timePoints)
    {
        const int n = timePoints.size();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            const string hh = timePoints[i].substr(0, 2), dd = timePoints[i].substr(3, 2);
            a[i] = ((stoi(hh) * 60) + (stoi(dd)));
        }
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            const int x = a[i] - a[i - 1], y = 1440 - a[i] + a[i - 1];
            ans = min(ans, min(x, y));
        }
        const int x = a[n - 1] - a[0], y = 1440 - a[n - 1] + a[0];
        ans = min(ans, min(x, y));
        return ans;
    }
};