// Problem: Earliest Time to Finish One Task
// Link to the problem: https://leetcode.com/problems/earliest-time-to-finish-one-task/
class Solution
{
public:
    int earliestTime(vector<vector<int>> &tasks)
    {
        int ans = INT_MAX;
        for (int i = 0; i < tasks.size(); i++)
        {
            ans = min(ans, tasks[i][1] + tasks[i][0]);
        }
        return ans;
    }
};