// Problem: Find X Value of Array II
// Link to the problem: https://leetcode.com/problems/find-x-value-of-array-ii/
class SegmentTree
{
public:
    static constexpr int mx = 6;
    int n, k;
    vector<vector<int>> tree;

    void makeLeaf(const int o, const int value)
    {
        fill(tree[o].begin(), tree[o].end(), 0);
        const int r = value % k;
        tree[o][r] = 1;
        tree[o][k] = r;
    }

    void mergePre(const vector<int> &left, const vector<int> &right, vector<int> &result)
    {
        fill(result.begin(), result.end(), 0);
        const int mulL = left[k], mulR = right[k];
        result[k] = (mulL * mulR) % k;
        for (int x = 0; x < k; x++)
        {
            result[x] = left[x];
        }
        for (int x = 0; x < k; x++)
        {
            result[(mulL * x) % k] += right[x];
        }
    }

    void maintain(const int o)
    {
        mergePre(tree[o * 2], tree[o * 2 + 1], tree[o]);
    }

    void build(const vector<int> &nums, const int o, const int l, const int r)
    {
        if (l == r)
        {
            makeLeaf(o, nums[l]);
            return;
        }
        const int m = (l + r) / 2;
        build(nums, o * 2, l, m);
        build(nums, o * 2 + 1, m + 1, r);
        maintain(o);
    }

    SegmentTree(const vector<int> &nums, const int k) : k(k), n(nums.size())
    {
        const int size = 2 << (int)ceil(log2(n));
        tree.resize(size, vector<int>(mx, 0));
        build(nums, 1, 0, n - 1);
    }

    void update(const int o, const int l, const int r, const int index, const int value)
    {
        if (l == r)
        {
            makeLeaf(o, value);
            return;
        }
        const int m = (l + r) / 2;
        if (index <= m)
        {
            update(o * 2, l, m, index, value);
        }
        else
        {
            update(o * 2 + 1, m + 1, r, index, value);
        }
        maintain(o);
    }

    vector<int> query(const int o, const int l, const int r, const int L, const int R)
    {
        if (L <= l && r <= R)
        {
            return tree[o];
        }
        const int m = (l + r) / 2;
        if (R <= m)
        {
            return query(o * 2, l, m, L, R);
        }
        if (L > m)
        {
            return query(o * 2 + 1, m + 1, r, L, R);
        }
        const vector<int> left = query(o * 2, l, m, L, R), right = query(o * 2 + 1, m + 1, r, L, R);
        vector<int> result(mx, 0);
        mergePre(left, right, result);
        return result;
    }
};

class Solution
{
public:
    vector<int> resultArray(vector<int> &nums, int k, vector<vector<int>> &queries)
    {
        SegmentTree seg(nums, k);
        vector<int> ans;
        const int n = nums.size(), m = queries.size();
        for (int i = 0; i < m; i++)
        {
            const int index = queries[i][0], value = queries[i][1], start = queries[i][2], x = queries[i][3];
            seg.update(1, 0, n - 1, index, value);
            const vector<int> pre = seg.query(1, 0, n - 1, start, n - 1);
            ans.push_back(pre[x]);
        }
        return ans;
    }
};