// Problem: Concatenate Non-Zero Digits and Multiply by Sum II
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-a-ii/
const int m = 1000000007;
const int mx = 100001;
long long p[mx];

int init = []()
{
    p[0] = 1;
    for (int i = 1; i < mx; ++i)
    {
        p[i] = (p[i - 1] * 10) % m;
    }
    return 0;
}();

class Solution
{
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>> &queries)
    {
        const int n = s.size(), k = queries.size();
        vector<int> ans(k, 0), a(n + 1, 0), b(n + 1, 0);
        vector<long long> x(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            const int d = s[i] - '0';
            a[i + 1] = a[i] + d;
            x[i + 1] = (d > 0) ? (x[i] * 10 + d) % m : x[i];
            b[i + 1] = b[i] + (d > 0);
        }
        for (int i = 0; i < k; ++i)
        {
            const int l = queries[i][0], r = queries[i][1] + 1, length = b[r] - b[l];
            const long long y = (x[r] - x[l] * p[length] % m + m) % m, z = a[r] - a[l];
            ans[i] = (y * z) % m;
        }
        return ans;
    }
};