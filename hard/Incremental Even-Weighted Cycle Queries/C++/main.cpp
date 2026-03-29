// Problem: Incremental Even-Weighted Cycle Queries
// Link to the problem: https://leetcode.com/problems/incremental-even-weighted-cycle-queries/
class DisjointSet
{
public:
    vector<int> parent, dist;
    DisjointSet(const int n)
    {
        parent.resize(n);
        dist.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            dist[i] = 0;
        }
    }

    pair<int, int> find(const int node)
    {
        if (parent[node] == node)
        {
            return {node, 0};
        }
        const pair<int, int> x = find(parent[node]);
        dist[node] ^= x.second;
        parent[node] = x.first;
        return {parent[node], dist[node]};
    }
};

class Solution
{
public:
    int numberOfEdgesAdded(int n, vector<vector<int>> &edges)
    {
        DisjointSet ds(n);
        int ans = 0;
        for (const vector<int> &edge : edges)
        {
            const pair<int, int> x = ds.find(edge[0]), y = ds.find(edge[1]);
            if (x.first == y.first)
            {
                if ((x.second ^ y.second) == edge[2])
                {
                    ans++;
                }
            }
            else
            {
                ds.parent[x.first] = y.first;
                ds.dist[x.first] = x.second ^ y.second ^ edge[2];
                ans++;
            }
        }
        return ans;
    }
};