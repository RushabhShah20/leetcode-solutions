// Problem: Minimize Hamming Distance After Swap Operations
// Link to the problem: https://leetcode.com/problems/minimize-hamming-distance-after-swap-operations/
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
    int minimumHammingDistance(vector<int> &source, vector<int> &target, vector<vector<int>> &allowedSwaps)
    {
        const int n = source.size();
        DisjointSet dsu(n);
        for (const vector<int> &allowedSwap : allowedSwaps)
        {
            dsu.unite(allowedSwap[0], allowedSwap[1]);
        }
        unordered_map<int, unordered_map<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            m[dsu.find(i)][source[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            const int u = dsu.find(i);
            if (m[u][target[i]] > 0)
            {
                m[u][target[i]]--;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};