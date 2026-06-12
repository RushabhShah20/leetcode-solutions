// Problem: Number of Ways to Assign Edge Weights II
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-ii/
class LCA
{
public:
    int n, m;
    vector<vector<int>> e, f;
    vector<int> d;
    LCA(const vector<vector<int>> &edges)
    {
        n = edges.size() + 2;
        m = log2(n) + 2;
        e.resize(n);
        d.assign(n, 0);
        f.assign(n, vector<int>(m, 0));
        for (const vector<int> &edge : edges)
        {
            const int x = edge[0], y = edge[1];
            e[x].push_back(y);
            e[y].push_back(x);
        }
        dfs(1, 0);
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                f[j][i] = f[f[j][i - 1]][i - 1];
            }
        }
    }
    void dfs(const int x, const int z)
    {
        f[x][0] = z;
        for (const int y : e[x])
        {
            if (y == z)
            {
                continue;
            }
            d[y] = d[x] + 1;
            dfs(y, x);
        }
    }
    int get(int u, int v)
    {
        if (d[u] < d[v])
        {
            swap(u, v);
        }
        for (int i = m - 1; i >= 0; i--)
        {
            if (d[f[u][i]] >= d[v])
            {
                u = f[u][i];
            }
        }
        if (u == v)
        {
            return u;
        }
        for (int i = m - 1; i >= 0; i--)
        {
            if (f[u][i] != f[v][i])
            {
                u = f[u][i];
                v = f[v][i];
            }
        }
        return f[u][0];
    }
};
class Solution
{
public:
    vector<int> assignEdgeWeights(vector<vector<int>> &edges, vector<vector<int>> &queries)
    {
        LCA lca(edges);
        const long long mod = 1000000007;
        vector<long long> p(lca.n + 1, 1);
        for (int i = 1; i <= lca.n; i++)
        {
            p[i] = (p[i - 1] << 1) % mod;
        }
        vector<int> ans;
        for (const vector<int> &query : queries)
        {
            const int b = lca.get(query[0], query[1]);
            const int c = lca.d[query[0]] + lca.d[query[1]] - 2 * lca.d[b];
            ans.push_back(c == 0 ? 0 : p[c - 1]);
        }
        return ans;
    }
};