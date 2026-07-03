// Problem: Network Recovery Pathways
// Link to the problem: https://leetcode.com/problems/network-recovery-pathways/
class Solution
{
public:
    long long dfs(const int n, const int m, const int u, const vector<vector<pair<int, int>>> &g, vector<long long> &memo)
    {
        if (u == n - 1)
        {
            return 0;
        }
        if (memo[u] != -1)
        {
            return memo[u];
        }
        long long ans = LLONG_MAX / 2;
        for (const pair<int, int> &i : g[u])
        {
            if (i.second >= m)
            {
                ans = min(ans, dfs(n, m, i.first, g, memo) + i.second);
            }
        }
        memo[u] = ans;
        return memo[u];
    }
    bool check(const int n, const int m, const long long k, const vector<vector<pair<int, int>>> &g)
    {
        vector<long long> memo(n, -1);
        return dfs(n, m, 0, g, memo) <= k;
    }
    int findMaxPathScore(vector<vector<int>> &edges, vector<bool> &online, long long k)
    {
        const int n = online.size();
        vector<vector<pair<int, int>>> g(n);
        int l = INT_MAX, r = INT_MIN;
        bool a = false;
        for (const vector<int> &edge : edges)
        {
            const int u = edge[0], v = edge[1], w = edge[2];
            if (!online[u] || !online[v])
            {
                continue;
            }
            g[u].push_back({v, w});
            l = min(l, w);
            r = max(r, w);
            a = true;
        }
        if (!a || !check(n, l, k, g))
        {
            return -1;
        }
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (check(n, m, k, g))
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return r;
    }
};