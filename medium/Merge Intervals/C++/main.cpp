// Problem: Merge Intervals
// Link to the problem: https://leetcode.com/problems/merge-intervals/
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        const int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (const vector<int> &interval : intervals)
        {
            if (ans.empty() || ans.back()[1] < interval[0])
            {
                ans.push_back(interval);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        return ans;
    }
};