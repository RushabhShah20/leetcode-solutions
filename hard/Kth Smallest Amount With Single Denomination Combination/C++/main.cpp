// Problem: Kth Smallest Amount With Single Denomination Combination
// Link to the problem: https://leetcode.com/problems/kth-smallest-amount-with-single-denomination-combination/
class Solution
{
public:
    long long get(const long long x, const vector<long long> &lcm, const int m)
    {
        long long ans = 0;
        for (int i = 1; i < m; i++)
        {
            if (lcm[i] > x)
            {
                continue;
            }
            if (__builtin_popcount(i) & 1)
            {
                ans += x / lcm[i];
            }
            else
            {
                ans -= x / lcm[i];
            }
        }
        return ans;
    }
    long long findKthSmallest(vector<int> &coins, int k)
    {
        sort(coins.begin(), coins.end());
        vector<int> a;
        for (int x : coins)
        {
            bool z = true;
            for (const int y : a)
            {
                if (x % y == 0)
                {
                    z = false;
                    break;
                }
            }
            if (z)
            {
                a.push_back(x);
            }
        }
        coins = a;
        const int n = coins.size(), m = (1 << n);
        vector<int> b(m);
        vector<long long> lcm(m, 1);
        long long l = k, r = 1ll * coins[0] * k + 1;
        for (int i = 1; i < m; i++)
        {
            const int x = i & (i - 1), j = __builtin_ctz(i);
            const long long y = lcm[x] / __gcd(lcm[x], (long long)coins[j]);
            if (y <= r / coins[j])
            {
                lcm[i] = y * coins[j];
            }
            else
            {
                lcm[i] = r + 1;
            }
        }
        while (l < r)
        {
            const long long x = (l + r) >> 1;
            if (get(x, lcm, m) >= k)
            {
                r = x;
            }
            else
            {
                l = x + 1;
            }
        }
        const long long ans = l;
        return ans;
    }
};