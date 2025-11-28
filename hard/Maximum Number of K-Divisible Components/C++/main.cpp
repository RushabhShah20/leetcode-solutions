// Problem: Maximum Number of K-Divisible Components
// Link to the problem: https://leetcode.com/problems/maximum-number-of-k-divisible-components/
class Solution
{
public:
    int maxKDivisibleComponents(int n, vector<vector<int>> &edges, vector<int> &values, int k)
    {
        vector<vector<int>> adj(n);
        for (const auto &edge : edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int ans = 0;
        function<long long(int, int)> dfs = [&](int curr, int parent) -> long long
        {
            long long sum = values[curr];
            for (int child : adj[curr])
            {
                if (child != parent)
                {
                    sum += dfs(child, curr);
                }
            }
            if (sum % k == 0)
            {
                ans++;
            }
            return sum;
        };
        dfs(0, -1);
        return ans;
    }
};