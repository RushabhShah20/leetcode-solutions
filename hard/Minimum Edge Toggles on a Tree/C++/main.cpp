// Problem: Minimum Edge Toggles on a Tree
// Link to the problem: https://leetcode.com/problems/minimum-edge-toggles-on-a-tree/
class Solution
{
public:
    vector<int> ans, diff;
    vector<vector<pair<int, int>>> adj;
    void dfs(int u, int p, int x)
    {
        for (const pair<int, int> &edge : adj[u])
        {
            int v = edge.first;
            int y = edge.second;
            if (v != p)
            {
                dfs(v, u, y);
            }
        }
        if (diff[u] == 1 && x != -1)
        {
            ans.push_back(x);
            diff[u] = 0;
            diff[p] = 1 - diff[p];
        }
    }
    vector<int> minimumFlips(int n, vector<vector<int>> &edges, string start, string target)
    {
        diff.resize(n);
        adj.resize(n);
        int totalDiff = 0;
        for (int i = 0; i < n; i++)
        {
            diff[i] = ((start[i] != target[i]) ? (1) : (0));
            totalDiff += diff[i];
        }
        if (totalDiff % 2 != 0)
        {
            return {-1};
        }
        for (int i = 0; i < n - 1; i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], i});
            adj[edges[i][1]].push_back({edges[i][0], i});
        }
        dfs(0, -1, -1);
        if (diff[0] != 0)
        {
            return {-1};
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};