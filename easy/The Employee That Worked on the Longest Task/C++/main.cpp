// Problem: The Employee That Worked on the Longest Task
// Link to the problem: https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/
class Solution
{
public:
    int hardestWorker(int n, vector<vector<int>> &logs)
    {
        vector<int> tasks(logs.size());
        tasks[0] = logs[0][1];
        for (int i = 1; i < logs.size(); i++)
        {
            tasks[i] = (logs[i][1] - logs[i - 1][1]);
        }
        int x = *max_element(tasks.begin(), tasks.end());
        vector<int> ans;
        for (int i = 0; i < tasks.size(); i++)
        {
            if (tasks[i] == x)
            {
                ans.push_back(logs[i][0]);
            }
        }
        return *min_element(ans.begin(), ans.end());
    }
};