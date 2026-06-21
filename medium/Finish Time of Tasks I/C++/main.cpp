// Problem: Finish Time of Tasks I
// Link to the problem: https://leetcode.com/problems/finish-time-of-tasks-i/
class Solution
{
public:
    long long dfs(const int u, const vector<vector<int>> &adj, const vector<int> &baseTime)
    {
        if (adj[u].empty())
        {
            return (long long)baseTime[u];
        }
        long long x = LLONG_MAX, y = LLONG_MIN;
        for (const int v : adj[u])
        {
            const long long a = dfs(v, adj, baseTime);
            x = min(x, a);
            y = max(y, a);
        }
        const long long z = y - x + baseTime[u], ans = y + z;
        return ans;
    }
    long long finishTime(int n, vector<vector<int>> &edges, vector<int> &baseTime)
    {
        vector<vector<int>> adj(n);
        for (const vector<int> &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
        }
        const long long ans = dfs(0, adj, baseTime);
        return ans;
    }
};