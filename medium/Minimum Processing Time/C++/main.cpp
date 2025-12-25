// Problem: Minimum Processing Time
// Link to the problem: https://leetcode.com/problems/minimum-processing-time/
class Solution
{
public:
    int minProcessingTime(vector<int> &processorTime, vector<int> &tasks)
    {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end(), greater<int>());
        int ans = 0, n = processorTime.size();
        for (int i = 0; i < n; i++)
        {
            int a = processorTime[i] + tasks[4 * i];
            int b = processorTime[i] + tasks[(4 * i) + 1];
            int c = processorTime[i] + tasks[(4 * i) + 2];
            int d = processorTime[i] + tasks[(4 * i) + 3];
            ans = max({ans, a, b, c, d});
        }
        return ans;
    }
};