// Problem: Critical Connections in a Network
// Link to the problem: https://leetcode.com/problems/critical-connections-in-a-network/
class Solution
{
public:
    int timer = 1;
    void dfs(int child, int parent, vector<int> &visited, vector<vector<int>> &adj, vector<int> &tin, vector<int> &low, vector<vector<int>> &ans)
    {
        visited[child] = 1;
        tin[child] = timer;
        low[child] = timer;
        timer++;
        for (const int &grandChild : adj[child])
        {
            if (grandChild == parent)
            {
                continue;
            }
            if (visited[grandChild] == 0)
            {
                dfs(grandChild, child, visited, adj, tin, low, ans);
                low[child] = min(low[child], low[grandChild]);
                if (low[grandChild] > tin[child])
                {
                    ans.push_back({grandChild, child});
                }
            }
            else
            {
                low[child] = min(low[child], low[grandChild]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<vector<int>> adj(n), ans;
        vector<int> visited(n, 0), tin(n), low(n);
        for (const vector<int> &connection : connections)
        {
            const int u = connection[0], v = connection[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0, -1, visited, adj, tin, low, ans);
        return ans;
    }
};