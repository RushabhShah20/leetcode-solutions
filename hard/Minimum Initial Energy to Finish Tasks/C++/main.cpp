// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
class Solution
{
public:
    int minimumEffort(vector<vector<int>> &tasks)
    {
        sort(tasks.begin(), tasks.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] - a[0] < b[1] - b[0]; });
        int ans = 0;
        for (const vector<int> &task : tasks)
        {
            ans = max(ans + task[0], task[1]);
        }
        return ans;
    }
};