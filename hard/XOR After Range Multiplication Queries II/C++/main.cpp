// Problem: XOR After Range Multiplication Queries II
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-ii/
class Solution
{
public:
    long long power(long long b, long long e, const long long m)
    {
        long long ans = 1;
        b %= m;
        while (e > 0)
        {
            if (e & 1)
            {
                ans = ans * b % m;
            }
            b = b * b % m;
            e >>= 1;
        }
        return ans;
    }
    int xorAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        const int n = nums.size(), m = sqrt(n);
        constexpr long long mod = 1000000007;
        vector<vector<vector<int>>> a(m);
        for (const vector<int> &query : queries)
        {
            const int l = query[0], r = query[1], k = query[2], v = query[3];
            if (k < m)
            {
                a[k].push_back({l, r, v});
            }
            else
            {
                for (int i = l; i <= r; i += k)
                {
                    nums[i] = 1LL * nums[i] * v % mod;
                }
            }
        }
        vector<long long> b(n + m, 1);
        for (int i = 0; i < m; i++)
        {
            if (a[i].empty())
            {
                continue;
            }
            for (int j = 0; j < m + n; j++)
            {
                b[j] = 1;
            }
            for (const vector<int> &c : a[i])
            {
                const int l = c[0], r = c[1], v = c[2];
                b[l] = b[l] * v % mod;
                const int x = ((r - l) / i + 1) * i + l;
                b[x] = b[x] * power(v, mod - 2, mod) % mod;
            }
            for (int j = i; j < n; j++)
            {
                b[j] = b[j] * b[j - i] % mod;
            }
            for (int j = 0; j < n; j++)
            {
                nums[j] = 1LL * nums[j] * b[j] % mod;
            }
        }
        int ans = 0;
        for (const int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};