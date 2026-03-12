// Problem: Maximize Spanning Tree Stability with Upgrades
// Link to the problem: https://leetcode.com/problems/maximize-spanning-tree-stability-with-upgrades/
class UnionFind
{
public:
    vector<int> p, size;
    int cnt;

    UnionFind(const int n)
    {
        p.resize(n);
        size.assign(n, 1);
        cnt = n;
        for (int i = 0; i < n; i++)
        {
            p[i] = i;
        }
    }

    int find(const int x)
    {
        if (p[x] != x)
        {
            p[x] = find(p[x]);
        }
        return p[x];
    }

    bool unite(const int a, const int b)
    {
        int pa = find(a), pb = find(b);
        if (pa == pb)
            return false;
        if (size[pa] > size[pb])
        {
            p[pb] = pa;
            size[pa] += size[pb];
        }
        else
        {
            p[pa] = pb;
            size[pb] += size[pa];
        }
        cnt--;
        return true;
    }
};

class Solution
{
public:
    int n, k;
    vector<vector<int>> edges;
    bool check(const int lim)
    {
        UnionFind uf(n);
        for (vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1], s = edge[2];
            if (s >= lim)
            {
                uf.unite(u, v);
            }
        }
        int rem = k;
        for (vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1], s = edge[2];
            if (s * 2 >= lim && rem > 0)
            {
                if (uf.unite(u, v))
                {
                    rem--;
                }
            }
        }
        return uf.cnt == 1;
    }

    int maxStability(int n, vector<vector<int>> &edges, int k)
    {
        this->n = n;
        this->edges = edges;
        this->k = k;
        UnionFind uf(n);
        int mn = 1e6;
        for (vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1], s = edge[2], must = edge[3];
            if (must)
            {
                mn = min(mn, s);
                if (!uf.unite(u, v))
                {
                    return -1;
                }
            }
        }
        for (vector<int> &edge : edges)
        {
            uf.unite(edge[0], edge[1]);
        }
        if (uf.cnt > 1)
        {
            return -1;
        }
        int l = 1, r = mn;
        while (l < r)
        {
            const int mid = (l + r + 1) >> 1;
            if (check(mid))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        return l;
    }
};