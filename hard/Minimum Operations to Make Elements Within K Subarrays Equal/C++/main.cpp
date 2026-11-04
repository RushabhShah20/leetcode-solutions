// Problem: Minimum Operations to Make Elements Within K Subarrays Equal
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-elements-within-k-subarrays-equal/
class Solution
{
public:
    vector<long long> getCosts(const vector<int> &nums, const int x)
    {
        const int n = nums.size();
        vector<long long> a(n);
        multiset<int> l, r;
        long long y = 0, z = 0;
        for (int i = 0; i < n; ++i)
        {
            int v = nums[i];
            if (l.empty() || v <= *l.rbegin())
            {
                l.insert(v);
                y += v;
            }
            else
            {
                r.insert(v);
                z += v;
            }
            if (i >= x)
            {
                v = nums[i - x];
                auto it = l.find(v);
                if (it != l.end())
                {
                    y -= v;
                    l.erase(it);
                }
                else
                {
                    it = r.find(v);
                    z -= v;
                    r.erase(it);
                }
            }
            if (l.size() > r.size() + 1)
            {
                auto it = prev(l.end());
                v = *it;
                r.insert(v);
                l.erase(it);
                y -= v;
                z += v;
            }
            else if (l.size() < r.size())
            {
                auto it = r.begin();
                v = *it;
                l.insert(v);
                r.erase(it);
                y += v;
                z -= v;
            }
            if (i >= x - 1)
            {
                const long long m = *l.rbegin(), c = m * (long long)l.size() - y, d = z - m * (long long)r.size();
                a[i] = c + d;
            }
        }
        return a;
    }
    long long minOperations(vector<int> &nums, int x, int k)
    {
        const int n = nums.size();
        const vector<long long> a = getCosts(nums, x);
        vector<long long> b(n + 1, 0), c(n + 1, LLONG_MAX);
        for (int j = 1; j <= k; ++j)
        {
            for (int i = 0; i <= n; i++)
            {
                c[i] = LLONG_MAX;
            }
            for (int i = j * x; i <= n; ++i)
            {
                c[i] = min(c[i - 1], b[i - x] + a[i - 1]);
            }
            b.swap(c);
        }
        const long long ans = b[n];
        return ans;
    }
};