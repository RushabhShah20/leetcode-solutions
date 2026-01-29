// Problem: Find Nth Smallest Integer With K One Bits
// Link to the problem: https://leetcode.com/problems/find-nth-smallest-integer-with-k-one-bits/
class Solution
{
public:
    static const int m = 50;
    long long nCr[m + 1][m + 1];
    void compute()
    {
        for (int i = 0; i <= m; i++)
        {
            nCr[i][0] = 1;
            nCr[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                nCr[i][j] = nCr[i - 1][j - 1] + nCr[i - 1][j];
            }
        }
    }
    long long nthSmallest(long long n, int k)
    {
        compute();
        for (int i = k; i <= 50; i++)
        {
            if (n > nCr[i][k])
            {
                continue;
            }
            long long ans = 0, p = n;
            int b = 0;
            for (int j = i; j >= 2; j--)
            {
                long long r = nCr[j - 1][k - b];
                if (p - r >= 1)
                {
                    p -= r;
                    b++;
                    ans |= ((long long)(1) << (j - 1));
                }
            }
            for (int j = 0; j < k - b; j++)
            {
                ans |= ((long long)(1) << j);
            }
            return ans;
        }
        return 1000000000000000000;
    }
};