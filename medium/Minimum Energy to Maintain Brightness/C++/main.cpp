// Problem: Minimum Energy to Maintain Brightness
// Link to the problem: https://leetcode.com/problems/minimum-energy-to-maintain-brightness/
class Solution
{
public:
    long long minEnergy(int n, int brightness, vector<vector<int>> &intervals)
    {
        const long long m = (brightness + 2) / 3;
        long long ans = 0;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedIntervals;
        for (const vector<int> &interval : intervals)
        {
            if (mergedIntervals.empty() || mergedIntervals.back()[1] < interval[0])
            {
                mergedIntervals.push_back(interval);
            }
            else
            {
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], interval[1]);
            }
        }
        for (const vector<int> &interval : mergedIntervals)
        {
            ans += m * (interval[1] - interval[0] + 1);
        }
        return ans;
    }
};
