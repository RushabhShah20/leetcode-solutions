// Problem: Is Graph Bipartite?
// Link to the problem: https://leetcode.com/problems/is-graph-bipartite/
class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> color(n, -1);
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            for (int j : graph[i])
            {
                adj[i].push_back(j);
            }
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (color[i] == -1)
            {
                color[i] = 0;
                q.push(i);
                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for (int v : adj[u])
                    {
                        if (color[v] == -1)
                        {
                            color[v] = 1 - color[u];
                            q.push(v);
                        }
                        else if (color[u] == color[v])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};