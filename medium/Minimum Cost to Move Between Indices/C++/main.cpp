// Problem: Minimum Cost to Move Between Indices
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-between-indices/
class Solution
{
public:
    vector<int> minCost(vector<int> &nums, vector<vector<int>> &queries)
    {
        const int n = nums.size(), m = queries.size();
        vector<long long> l(n, 0), r(n, 0);
        r[0] = 1;
        l[n - 1] = 1;
        for (int i = 1; i < n - 1; i++)
        {
            const long long x = (long long)nums[i + 1] - (long long)nums[i], y = (long long)nums[i] - (long long)nums[i - 1];
            if (x < y)
            {
                r[i] = 1;
            }
            else
            {
                r[i] = x;
            }
            if (y <= x)
            {
                l[i] = 1;
            }
            else
            {
                l[i] = y;
            }
        }
        vector<long long> a(n, 0), b(n, 0);
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + r[i - 1];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = b[i + 1] + l[i + 1];
        }
        vector<int> ans(m);
        for (int i = 0; i < m; i++)
        {
            const int u = queries[i][0], v = queries[i][1];
            if (u < v)
            {
                ans[i] = a[v] - a[u];
            }
            else
            {
                ans[i] = b[v] - b[u];
            }
        }
        return ans;
    }
};