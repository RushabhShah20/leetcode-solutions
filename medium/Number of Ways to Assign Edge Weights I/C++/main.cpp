// Problem: Number of Ways to Assign Edge Weights I
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-assign-edge-weights-i/
class Solution
{
public:
    long long power(long long b, long long e, const long long m)
    {
        long long ans = 1;
        b %= m;
        while (e > 0)
        {
            if (e & 1)
            {
                ans = ans * b % m;
            }
            b = b * b % m;
            e >>= 1;
        }
        return ans;
    }
    int dfs(const vector<vector<int>> &g, const int x, const int z)
    {
        int ans = 0;
        for (const int y : g[x])
        {
            if (y == z)
            {
                continue;
            }
            ans = max(ans, dfs(g, y, x) + 1);
        }
        return ans;
    }
    int assignEdgeWeights(vector<vector<int>> &edges)
    {
        constexpr long long mod = 1000000007;
        const int n = edges.size() + 1;
        vector<vector<int>> g(n + 1);
        for (const vector<int> &edge : edges)
        {
            const int x = edge[0], y = edge[1];
            g[x].push_back(y);
            g[y].push_back(x);
        }
        const int z = dfs(g, 1, 0);
        const int ans = power(2, z - 1, mod);
        return ans;
    }
};