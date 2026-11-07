// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
class Solution
{
public:
    vector<int> assignTasks(vector<int> &servers, vector<int> &tasks)
    {
        const int m = servers.size(), n = tasks.size();
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> a;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> b;
        for (int i = 0; i < m; i++)
        {
            b.push({servers[i], i});
        }
        vector<int> ans(n);
        long long x = 0;
        for (int i = 0; i < n; i++)
        {
            x = max(x, (long long)i);
            while (!a.empty() && a.top().first <= x)
            {
                pair<long long, int> y = a.top();
                b.push({servers[y.second], y.second});
                a.pop();
            }
            if (b.empty())
            {
                x = a.top().first;
                while (!a.empty() && a.top().first <= x)
                {
                    pair<long long, int> y = a.top();
                    b.push({servers[y.second], y.second});
                    a.pop();
                }
            }
            pair<int, int> z = b.top();
            b.pop();
            ans[i] = z.second;
            a.push({x + tasks[i], z.second});
        }
        return ans;
    }
};