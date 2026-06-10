// Problem: Maximum Total Subarray Value II
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-ii/
class SegmentTree
{
public:
    int n;
    vector<long long> mx, mn;
    SegmentTree(const vector<int> &nums)
    {
        n = nums.size();
        mx.resize(4 * n);
        mn.resize(4 * n);
        build(1, 0, n - 1, nums);
    }
    void build(const long long node, const long long l, const long long r, const vector<int> &nums)
    {
        if (l == r)
        {
            mx[node] = mn[node] = nums[l];
            return;
        }
        const long long m = l + (r - l) / 2;
        build(node * 2, l, m, nums);
        build(node * 2 + 1, m + 1, r, nums);
        mx[node] = max(mx[node * 2], mx[node * 2 + 1]);
        mn[node] = min(mn[node * 2], mn[node * 2 + 1]);
    }
    pair<long long, long long> query(const long long node, const long long l, const long long r, const long long ql, const long long qr)
    {
        if (ql <= l && r <= qr)
        {
            return {mx[node], mn[node]};
        }
        const long long m = l + (r - l) / 2;
        pair<long long, long long> ans = {-1e9, 1e9};
        if (ql <= m)
        {
            const pair<long long, long long> x = query(node * 2, l, m, ql, qr);
            ans.first = max(ans.first, x.first);
            ans.second = min(ans.second, x.second);
        }
        if (qr > m)
        {
            const pair<long long, long long> y = query(node * 2 + 1, m + 1, r, ql, qr);
            ans.first = max(ans.first, y.first);
            ans.second = min(ans.second, y.second);
        }
        return ans;
    }
    long long get(const long long l, const long long r)
    {
        const pair<long long, long long> ans = query(1, 0, n - 1, l, r);
        return ans.first - ans.second;
    }
};
class Solution
{
public:
    long long maxTotalValue(vector<int> &nums, int k)
    {
        const int n = nums.size();
        SegmentTree st(nums);
        priority_queue<vector<long long>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({st.get(i, n - 1), i, n - 1});
        }
        long long ans = 0;
        while (k--)
        {
            const vector<long long> z = pq.top();
            pq.pop();
            ans += z[0];
            const long long l = z[1], r = z[2];
            if (r > l)
            {
                pq.push({st.get(l, r - 1), l, r - 1});
            }
        }
        return ans;
    }
};