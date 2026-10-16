// Problem: Subarrays Distinct Element Sum of Squares II
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii/
class FenwickTree
{
public:
    int size;
    vector<long long> t1, t2;
    FenwickTree(const int n)
    {
        size = n;
        t1.assign(n + 2, 0);
        t2.assign(n + 2, 0);
    }
    int _lowbit(const int i)
    {
        return i & -i;
    }
    void add(const int l, const int r, const int z)
    {
        _add(l, z);
        _add(r + 1, -z);
    }
    long long query(const int l, const int r)
    {
        return _query(r) - _query(l - 1);
    }
    void _add(int i, const int z)
    {
        i += 1;
        const long long j = i;
        while (i <= size)
        {
            t1[i] += z;
            t2[i] += j * z;
            i += _lowbit(i);
        }
    }
    long long _query(int i)
    {
        i += 1;
        const long long j = i + 1;
        if (i > size)
        {
            i = size;
        }
        long long ans = 0;
        while (i > 0)
        {
            ans += j * t1[i] - t2[i];
            i -= _lowbit(i);
        }
        return ans;
    }
};
class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 0, x = 0;
        FenwickTree ft(n + 10);
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            constexpr int k = 1000000007;
            const int y = nums[i], j = (m.count(y) ? m[y] : -1) + 1;
            const long long z = ft.query(j, i);
            x = (x + z * 2 + i - j + 1) % k;
            ans = (ans + x) % k;
            ft.add(j, i, 1);
            m[y] = i;
        }
        return ans;
    }
};