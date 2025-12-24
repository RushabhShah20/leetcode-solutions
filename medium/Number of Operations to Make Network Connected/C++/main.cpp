// Problem: Number of Operations to Make Network Connected
// Link to the problem: https://leetcode.com/problems/number-of-operations-to-make-network-connected/
class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
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

    void unionByRank(int u, int v)
    {
        int pu = find(u);
        int pv = find(v);
        if (pu == pv)
        {
            return;
        }
        if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
        }
        else if (rank[pu] > rank[pv])
        {
            parent[pv] = pu;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};
class Solution
{
public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        int m = connections.size();
        if (m < n - 1)
        {
            return -1;
        }
        else
        {
            DisjointSet ds(n);
            for (const vector<int> &connection : connections)
            {
                ds.unionByRank(connection[0], connection[1]);
            }
            unordered_set<int> s;
            for (int i = 0; i < n; i++)
            {
                s.insert(ds.find(i));
            }
            const int ans = s.size() - 1;
            return ans;
        }
    }
};