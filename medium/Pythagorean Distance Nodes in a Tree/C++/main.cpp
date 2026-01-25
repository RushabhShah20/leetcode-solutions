// Problem: Pythagorean Distance Nodes in a Tree
// Link to the problem: https://leetcode.com/problems/pythagorean-distance-nodes-in-a-tree/
class Solution
{
public:
    void getDistances(const int u, const int idx, const vector<vector<int>> &adj, vector<vector<int>> &dists)
    {
        queue<int> q;
        dists[u][idx] = 0;
        q.push(u);
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for (const int i : adj[v])
            {
                if (dists[i][idx] == -1)
                {
                    dists[i][idx] = dists[v][idx] + 1;
                    q.push(i);
                }
            }
        }
    }
    int specialNodes(int n, vector<vector<int>> &edges, int x, int y, int z)
    {
        vector<vector<int>> adj(n);
        for (const vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>> dists(n, vector<int>(3, -1));
        getDistances(x, 0, adj, dists);
        getDistances(y, 1, adj, dists);
        getDistances(z, 2, adj, dists);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            const long long a = dists[i][0], b = dists[i][1], c = dists[i][2];
            const long long sa = a * a, sb = b * b, sc = c * c;
            if (sa + sb == sc || sa + sc == sb || sb + sc == sa)
            {
                ans++;
            }
        }
        return ans;
    }
};