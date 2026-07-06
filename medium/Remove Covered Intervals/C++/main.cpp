// Problem: Remove Covered Intervals
// Link to the problem: https://leetcode.com/problems/remove-covered-intervals/
class Solution
{
public:
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0]; });
        int ans = 0, curr, prev = 0;
        for (const vector<int> &interval : intervals)
        {
            curr = interval[1];
            if (prev < curr)
            {
                ans++;
                prev = curr;
            }
        }
        return ans;
    }
};