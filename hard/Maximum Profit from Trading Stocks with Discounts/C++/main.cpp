// Problem: Maximum Profit from Trading Stocks with Discounts
// Link to the problem: https://leetcode.com/problems/maximum-profit-from-trading-stocks-with-discounts/
class Solution
{
public:
    void update(vector<int> &a, vector<int> &b, int budget)
    {
        vector<int> c = a;
        for (int i = budget; i >= 0; i--)
        {
            for (int j = 0; j <= budget - i; j++)
            {
                c[i + j] = max(c[i + j], a[i] + b[j]);
            }
        }
        a = c;
    }
    pair<vector<int>, vector<int>> dfs(int u, int budget, vector<vector<int>> &adj, vector<int> &present, vector<int> &future)
    {
        vector<int> x(budget + 1, 0), y(budget + 1, 0);
        for (int v : adj[u])
        {
            pair<vector<int>, vector<int>> z = dfs(v, budget, adj, present, future);
            update(x, z.first, budget);
            update(y, z.second, budget);
        }
        vector<int> ans0(budget + 1, 0), ans1(budget + 1, 0);
        int p = present[u], q = future[u] - present[u], r = p / 2, s = future[u] - r;
        for (int i = 0; i <= budget; i++)
        {
            ans0[i] = x[i];
            if (i >= p)
            {
                ans0[i] = max(ans0[i], y[i - p] + q);
            }
            ans1[i] = x[i];
            if (i >= r)
            {
                ans1[i] = max(ans1[i], y[i - r] + s);
            }
        }
        const pair<vector<int>, vector<int>> ans = make_pair(ans0, ans1);
        return ans;
    }
    int maxProfit(int n, vector<int> &present, vector<int> &future, vector<vector<int>> &hierarchy, int budget)
    {
        vector<vector<int>> adj(n);
        for (const vector<int> i : hierarchy)
        {
            adj[i[0] - 1].push_back(i[1] - 1);
        }
        pair<vector<int>, vector<int>> a = dfs(0, budget, adj, present, future);
        const int ans = *max_element(a.first.begin(), a.first.end());
        return ans;
    }
};