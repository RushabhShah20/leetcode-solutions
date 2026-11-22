// Problem: Earliest Signal Activation Times
// Link to the problem: https://leetcode.com/problems/earliest-signal-activation-times/
class Solution
{
public:
    vector<long long> earliestActivationTimes(int n, vector<vector<int>> &edges, vector<int> &requiredSignals)
    {
        const int m = edges.size();
        vector<vector<pair<int, int>>> g(n);
        for (int i = 0; i < m; i++)
        {
            g[edges[i][0]].push_back({edges[i][2], edges[i][1]});
        }
        vector<long long> ans(n, -1);
        ans[0] = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        for (const pair<int, int> i : g[0])
        {
            pq.push(i);
        }
        while (!pq.empty())
        {
            const pair<long long, int> x = pq.top();
            pq.pop();
            if (ans[x.second] >= 0)
            {
                continue;
            }
            requiredSignals[x.second]--;
            if (requiredSignals[x.second] == 0)
            {
                ans[x.second] = x.first;
                for (const pair<int, int> y : g[x.second])
                {
                    if (ans[y.second] < 0)
                    {
                        pq.push({x.first + y.first, y.second});
                    }
                }
            }
        }
        return ans;
    }
};