// Problem: Find Eventual Safe States
// Link to the problem: https://leetcode.com/problems/find-eventual-safe-states/
class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        const int n = graph.size();
        vector<vector<int>> adj(n);
        vector<int> inDegree(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (const int j : graph[i])
            {
                adj[j].push_back(i);
                inDegree[i]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for (int v : adj[u])
            {
                inDegree[v]--;
                if (inDegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};