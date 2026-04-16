// Problem: Closest Equal Element Queries
// Link to the problem: https://leetcode.com/problems/closest-equal-element-queries/
class Solution
{
public:
    vector<int> solveQueries(vector<int> &nums, vector<int> &queries)
    {
        const int n = nums.size(), m = queries.size();
        vector<int> l(n), r(n);
        unordered_map<int, int> p;
        for (int i = -n; i < n; i++)
        {
            if (i >= 0)
            {
                l[i] = p.count(nums[i]) ? p[nums[i]] : -n;
            }
            p[nums[(i + n) % n]] = i;
        }
        p.clear();
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (i < n)
            {
                r[i] = p.count(nums[i]) ? p[nums[i]] : 2 * n;
            }
            p[nums[i % n]] = i;
        }
        vector<int> ans(m);
        for (int i = 0; i < m; i++)
        {
            const int x = queries[i];
            if (x - l[x] == n)
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = min(x - l[x], r[x] - x);
            }
        }
        return ans;
    }
};