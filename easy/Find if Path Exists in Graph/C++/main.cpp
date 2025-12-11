// Problem: Find if Path Exists in Graph
// Link to the problem: https://leetcode.com/problems/find-if-path-exists-in-graph/
class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
        {
            return;
        }
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
class Solution
{
public:
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        DisjointSet ds(n);
        for (const vector<int> &edge : edges)
        {
            ds.unionByRank(edge[0], edge[1]);
        }
        return ds.findUPar(source) == ds.findUPar(destination);
    }
};