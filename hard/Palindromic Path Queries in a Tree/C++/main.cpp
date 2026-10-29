// Problem: Palindromic Path Queries in a Tree
// Link to the problem: https://leetcode.com/problems/palindromic-path-queries-in-a-tree/
class FenwickTree
{
public:
    vector<int> tree;
    int n;
    FenwickTree(const int _n) : tree(_n + 1), n(_n) {}

    int lowbit(const int x)
    {
        return x & -x;
    }

    void update(int x, const int v)
    {
        while (x <= n)
        {
            tree[x] ^= v;
            x += lowbit(x);
        }
    }

    int query(int x)
    {
        int ret = 0;
        while (x)
        {
            ret ^= tree[x];
            x -= lowbit(x);
        }
        return ret;
    }

    void updateRange(const int l, const int r, const int v)
    {
        update(l, v);
        update(r + 1, v);
    }
};

class Solution
{
public:
    void dfs(const int u, const int v, vector<int> &dep, vector<int> &l, vector<int> &r, vector<vector<int>> &fa, int &timer, const vector<vector<int>> &g)
    {
        l[u] = ++timer;
        fa[u][0] = v;
        for (const int x : g[u])
        {
            if (x == v)
            {
                continue;
            }
            dep[x] = dep[u] + 1;
            dfs(x, u, dep, l, r, fa, timer, g);
        }
        r[u] = timer;
    }
    int lca(int u, int v, const vector<int> &dep, const vector<vector<int>> &fa, const int k)
    {
        if (dep[u] < dep[v])
        {
            swap(u, v);
        }
        const int diff = dep[u] - dep[v];
        for (int i = 0; i < k; ++i)
        {
            if ((diff >> i) & 1)
            {
                u = fa[u][i];
            }
        }
        if (u == v)
        {
            return u;
        }
        for (int i = k - 1; i >= 0; --i)
        {
            if (fa[u][i] != fa[v][i])
            {
                u = fa[u][i];
                v = fa[v][i];
            }
        }
        return fa[u][0];
    }
    vector<bool> palindromePath(int n, vector<vector<int>> &edges, string s, vector<string> &queries)
    {
        vector<vector<int>> g(n);
        for (int i = 0; i < n - 1; i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        const int k = 32 - __builtin_clz(n);
        vector<vector<int>> fa(n, vector<int>(k));
        vector<int> dep(n), l(n), r(n);
        int timer = 0;
        dfs(0, 0, dep, l, r, fa, timer, g);
        for (int j = 1; j < k; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                fa[i][j] = fa[fa[i][j - 1]][j - 1];
            }
        }
        FenwickTree ft(n + 1);
        for (int i = 0; i < n; ++i)
        {
            ft.updateRange(l[i], r[i], 1 << (s[i] - 'a'));
        }
        vector<bool> ans;
        const int m = queries.size();
        for (int i = 0; i < m; i++)
        {
            stringstream ss(queries[i]);
            string op;
            ss >> op;
            if (op == "update")
            {
                int u;
                char c;
                ss >> u >> c;
                ft.updateRange(l[u], r[u], (1 << (s[u] - 'a')) ^ (1 << (c - 'a')));
                s[u] = c;
            }
            else
            {
                int u, v;
                ss >> u >> v;
                int w = lca(u, v, dep, fa, k);
                int mask = ft.query(l[u]) ^ ft.query(l[v]) ^ (1 << (s[w] - 'a'));
                ans.push_back(__builtin_popcount(mask) <= 1);
            }
        }
        return ans;
    }
};