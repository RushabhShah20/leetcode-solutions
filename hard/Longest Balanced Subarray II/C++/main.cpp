// Problem: Longest Balanced Subarray II
// Link to the problem: https://leetcode.com/problems/longest-balanced-subarray-ii/
struct SegmentTree
{
    int n;
    struct Node
    {
        int mn, mx, lazy;
    };
    vector<Node> t;
    SegmentTree(const vector<int> &a)
    {
        n = a.size();
        t.assign(4 * n, {INT_MAX, INT_MIN, 0});
        build(1, 0, n - 1, a);
    }
    void build(const int v, const int l, const int r, const vector<int> &a)
    {
        if (l == r)
        {
            t[v].mn = t[v].mx = a[l];
            return;
        }
        const int m = (l + r) / 2;
        build(v * 2, l, m, a);
        build(v * 2 + 1, m + 1, r, a);
        pull(v);
    }
    void pull(const int v)
    {
        t[v].mn = min(t[v * 2].mn, t[v * 2 + 1].mn);
        t[v].mx = max(t[v * 2].mx, t[v * 2 + 1].mx);
    }
    void apply_add(const int v, const int x)
    {
        t[v].mn += x;
        t[v].mx += x;
        t[v].lazy += x;
    }
    void push(const int v)
    {
        if (t[v].lazy)
        {
            apply_add(v * 2, t[v].lazy);
            apply_add(v * 2 + 1, t[v].lazy);
            t[v].lazy = 0;
        }
    }
    void add_range(const int v, const int l, const int r, const int ql, const int qr, const int x)
    {
        if (ql > r || qr < l)
        {
            return;
        }
        if (ql <= l && r <= qr)
        {
            apply_add(v, x);
            return;
        }
        push(v);
        const int m = (l + r) / 2;
        add_range(v * 2, l, m, ql, qr, x);
        add_range(v * 2 + 1, m + 1, r, ql, qr, x);
        pull(v);
    }
    void add_range(const int l, const int r, const int x)
    {
        add_range(1, 0, n - 1, l, r, x);
    }
    int find_rightmost_zero(const int v, const int l, const int r)
    {
        if (t[v].mn > 0 || t[v].mx < 0)
        {
            return -1;
        }
        if (l == r)
        {
            return l;
        }
        push(v);
        const int m = (l + r) / 2;
        const int res = find_rightmost_zero(v * 2 + 1, m + 1, r);
        if (res != -1)
        {
            return res;
        }
        return find_rightmost_zero(v * 2, l, m);
    }
    int find_rightmost_zero()
    {
        return find_rightmost_zero(1, 0, n - 1);
    }
};
class Solution
{
public:
    int longestBalanced(vector<int> &nums)
    {
        const int n = nums.size();
        map<int, int> m;
        vector<int> nextPos(n, n);
        for (int i = n - 1; i >= 0; i--)
        {
            if (m.count(nums[i]))
            {
                nextPos[i] = m[nums[i]];
            }
            m[nums[i]] = i;
        }
        vector<int> p(n, 0);
        unordered_set<int> u;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                p[i] += p[i - 1];
            }
            if (u.count(nums[i]))
            {
                continue;
            }
            if (nums[i] % 2 == 0)
            {
                p[i]--;
            }
            else
            {
                p[i]++;
            }
            u.insert(nums[i]);
        }
        SegmentTree s(p);
        int ans = s.find_rightmost_zero() + 1;
        for (int i = 1; i < n; i++)
        {
            const int r = nextPos[i - 1] - 1, v = ((nums[i - 1] % 2) ? -1 : 1);
            s.add_range(0, r, v);
            ans = max(ans, s.find_rightmost_zero() - i + 1);
        }
        return ans;
    }
};