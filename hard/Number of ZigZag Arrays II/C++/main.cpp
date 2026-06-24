// Problem: Number of ZigZag Arrays II
// Link to the problem: https://leetcode.com/problems/number-of-zigzag-arrays-ii/
class Solution
{
public:
    vector<vector<long long>> multiply(const vector<vector<long long>> &a, const vector<vector<long long>> &b, const long long m)
    {
        const int n = a.size(), k = b[0].size();
        vector<vector<long long>> ans(n, vector<long long>(k, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[0].size(); j++)
            {
                const long long x = a[i][j];
                if (x == 0)
                {
                    continue;
                }
                for (int p = 0; p < k; p++)
                {
                    ans[i][p] = (ans[i][p] + x * b[j][p]) % m;
                }
            }
        }
        return ans;
    }
    vector<vector<long long>> power(vector<vector<long long>> b, long long e, vector<vector<long long>> ans, const long long m)
    {
        while (e > 0)
        {
            if (e & 1)
            {
                ans = multiply(ans, b, m);
            }
            b = multiply(b, b, m);
            e >>= 1;
        }
        return ans;
    }
    int zigZagArrays(int n, int l, int r)
    {
        constexpr long long m = 1000000007;
        const int k = r - l + 1;
        if (n == 1)
        {
            return k;
        }
        const int p = 2 * k;
        vector<vector<long long>> v(p, vector<long long>(p, 0));
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < i; j++)
            {
                v[i][j + k] = 1;
            }
            for (int j = i + 1; j < k; j++)
            {
                v[i + k][j] = 1;
            }
        }
        vector<vector<long long>> dp(1, vector<long long>(p, 1));
        dp = power(move(v), n - 1, move(dp), m);
        long long ans = 0;
        for (int i = 0; i < p; i++)
        {
            ans = (ans + dp[0][i]) % m;
        }
        return ans;
    }
};
