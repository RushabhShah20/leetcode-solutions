// Problem: Minimum Score of a Path Between Two Cities
// Link to the problem: https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/
class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(const int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    int find(const int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = find(parent[node]);
    }

    void unite(const int u, const int v)
    {
        int x = find(u), y = find(v);
        if (x != y)
        {
            if (rank[x] < rank[y])
            {
                swap(x, y);
            }
            parent[y] = x;
            if (rank[x] == rank[y])
            {
                rank[x]++;
            }
        }
    }
};
class Solution
{
public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        DisjointSet dsu(n + 1);
        int ans = INT_MAX;
        for (const vector<int> &road : roads)
        {
            dsu.unite(road[0], road[1]);
        }
        for (const vector<int> &road : roads)
        {
            if (dsu.find(1) == dsu.find(road[0]))
            {
                ans = min(ans, road[2]);
            }
        }
        return ans;
    }
};