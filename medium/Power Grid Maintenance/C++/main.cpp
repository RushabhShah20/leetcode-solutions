// Problem: Power Grid Maintenance
// Link to the problem: https://leetcode.com/problems/power-grid-maintenance/
class Solution
{
public:
    void dfs(int id, int node, vector<vector<int>> &adj, vector<int> &vis, map<int, set<int>> &mp, map<int, int> &mpp)
    {
        vis[node] = 1;
        mp[id].insert(node);
        mpp[node] = id;
        for (int it : adj[node])
        {
            if (!vis[it])
            {
                dfs(id, it, adj, vis, mp, mpp);
            }
        }
    }
    vector<int> processQueries(int c, vector<vector<int>> &connections, vector<vector<int>> &queries)
    {
        vector<vector<int>> adj(c);
        for (vector<int> connection : connections)
        {
            adj[connection[0] - 1].push_back(connection[1] - 1);
            adj[connection[1] - 1].push_back(connection[0] - 1);
        }
        vector<int> vis(c), online(c, 1);
        int id = 0;
        map<int, set<int>> mp;
        map<int, int> mpp;
        for (int i = 0; i < c; i++)
        {
            if (!vis[i])
            {
                dfs(id, i, adj, vis, mp, mpp);
                id++;
            }
        }
        vector<int> ans;
        for (vector<int> &q : queries)
        {
            int type = q[0], node = q[1] - 1;
            int compId = mpp[node];

            if (type == 2)
            {
                mp[compId].erase(node);
                online[node] = 0;
                continue;
            }

            if (online[node])
            {
                ans.push_back(node + 1);
            }
            else if (mp[compId].size() > 0)
            {
                ans.push_back(*mp[compId].begin() + 1);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};