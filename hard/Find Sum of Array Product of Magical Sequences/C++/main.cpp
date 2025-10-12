// Problem: Find Sum of Array Product of Magical Sequences
// Link to the problem: https://leetcode.com/problems/find-sum-of-array-product-of-magical-sequences/
class Solution
{
public:
    int magicalSum(int m, int k, vector<int> &nums)
    {
        long long ans = 0, mod = 1e9 + 7, n = nums.size();
        vector<vector<long long>> c(m + 1, vector<long long>(m + 1, 0));
        for (int i = 0; i <= m; i++)
        {
            c[i][0] = c[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
            }
        }
        vector<vector<long long>> powA(n, vector<long long>(m + 1, 1));
        for (int i = 0; i < n; i++)
        {
            long long a = nums[i] % mod;
            for (int t = 1; t <= m; t++)
            {
                powA[i][t] = (powA[i][t - 1] * a) % mod;
            }
        }
        vector<vector<vector<long long>>> cur(m + 1, vector<vector<long long>>(m + 1, vector<long long>(m + 1, 0)));
        cur[m][0][0] = 1;
        for (int i = 0; i < n; i++)
        {
            vector<vector<vector<long long>>> nxt(m + 1, vector<vector<long long>>(m + 1, vector<long long>(m + 1, 0)));
            for (int r = 0; r <= m; r++)
            {
                for (int carry = 0; carry <= m; carry++)
                {
                    for (int ones = 0; ones <= m; ones++)
                    {
                        long long val = cur[r][carry][ones];
                        if (val == 0)
                            continue;
                        for (int t = 0; t <= r; t++)
                        {
                            int newr = r - t;
                            int sum = carry + t;
                            int bit = sum & 1;
                            int newones = ones + bit;
                            if (newones > m)
                            {
                                continue;
                            }
                            int newcarry = sum >> 1;
                            long long mult = (c[r][t] * powA[i][t]) % mod;
                            long long add = (val * mult) % mod;
                            nxt[newr][newcarry][newones] += add;
                            if (nxt[newr][newcarry][newones] >= mod)
                                nxt[newr][newcarry][newones] -= mod;
                        }
                    }
                }
            }
            cur.swap(nxt);
        }
        for (int carry = 0; carry <= m; carry++)
        {
            for (int ones = 0; ones <= m; ones++)
            {
                long long val = cur[0][carry][ones];
                if (val == 0)
                {
                    continue;
                }
                int extra = __builtin_popcount((unsigned)carry);
                if (ones + extra == k)
                {
                    ans = (ans + val) % mod;
                }
            }
        }
        return (int)ans;
    }
};