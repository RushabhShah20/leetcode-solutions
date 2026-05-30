// Problem: Block Placement Queries
// Link to the problem: https://leetcode.com/problems/block-placement-queries/
class Solution
{
public:
    vector<int> bt;
    void update(int x, const int v)
    {
        while (x < bt.size())
        {
            bt[x] = max(bt[x], v);
            x += x & -x;
        }
    }
    int query(int x)
    {
        int ans = 0;
        while (x > 0)
        {
            ans = max(ans, bt[x]);
            x -= x & -x;
        }
        return ans;
    }
    vector<bool> getResults(vector<vector<int>> &queries)
    {
        const int n = queries.size(), mx = 50000;
        set<int> s = {0, mx};
        for (int i = 0; i < n; i++)
        {
            if (queries[i][0] == 1)
            {
                s.insert(queries[i][1]);
            }
        }
        bt.assign(mx + 1, 0);
        int y = 0;
        for (const int x : s)
        {
            if (x > 0)
            {
                update(x, x - y);
            }
            y = x;
        }
        vector<bool> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (queries[i][0] == 1)
            {
                const int x = queries[i][1];
                s.erase(x);
                auto it = s.lower_bound(x);
                const int next = *it, prev = *(--it);
                update(next, next - prev);
            }
            else
            {
                const int x = queries[i][1], sz = queries[i][2];
                auto it = s.upper_bound(x);
                const int prev = *(--it);
                ans.push_back(max(x - prev, query(prev)) >= sz);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
