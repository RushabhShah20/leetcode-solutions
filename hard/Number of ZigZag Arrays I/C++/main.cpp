// Problem: Number of ZigZag Arrays I
// Link to the problem: https://leetcode.com/problems/number-of-zigzag-arrays-i/
class Solution
{
public:
    int zigZagArrays(int n, int l, int r)
    {
        const long long m = 1000000007;
        const int k = r - l + 1;
        vector<long long> dp0(k, 1), dp1(k, 1);
        vector<long long> a(k + 1, 0), b(k + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < k; j++)
            {
                a[j + 1] = (a[j] + dp0[j]) % m;
                b[j + 1] = (b[j] + dp1[j]) % m;
            }
            long long x = a[k];
            for (int j = 0; j < k; j++)
            {
                dp0[j] = b[j];
                dp1[j] = (x - a[j + 1] + m) % m;
            }
        }
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans = (ans + dp0[i] + dp1[i]) % m;
        }
        return ans;
    }
};