// Problem: Redundant Connection
// Link to the problem: https://leetcode.com/problems/redundant-connection/
class DisjointSet
{
public:
    vector<int> parent, size;
    DisjointSet(int n)
    {
        parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = find(parent[node]);
    }

    bool unionBySize(int u, int v)
    {
        int pu = find(u);
        int pv = find(v);
        if (pu == pv)
        {
            return false;
        }
        if (size[pu] > size[pv])
        {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
        else
        {
            size[pv] += size[pu];
            parent[pu] = pv;
        }
        return true;
    }
};
class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        DisjointSet ds(n);
        for (const vector<int> &edge : edges)
        {
            if (ds.unionBySize(edge[0] - 1, edge[1] - 1) == false)
            {
                return {edge[0], edge[1]};
            }
        }
        return {};
    }
};