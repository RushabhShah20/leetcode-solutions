// Problem: Count Ways to Choose Coprime Integers from Rows
// Link to the problem: https://leetcode.com/problems/count-ways-to-choose-coprime-integers-from-rows/
class Solution
{
public:
    const int mod = 1e9 + 7;
    const int maxval = 150;
    vector<int> mobius(int maxval)
    {
        vector<int> mu(maxval + 1);
        vector<int> prime(maxval + 1, 0);
        vector<bool> x(maxval + 1, true);
        mu[1] = 1;
        for (int i = 2; i <= maxval; i++)
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % (j * j) == 0)
                {
                    x[i] = false;
                    break;
                }
            }
        }
        vector<int> y(maxval + 1, 0);
        for (int i = 2; i <= maxval; i++)
        {
            if (y[i] == 0)
                for (int j = i; j <= maxval; j += i)
                {
                    if (y[j] == 0)
                    {
                        y[j] = i;
                    }
                }
        }
        for (int i = 2; i <= maxval; i++)
        {
            if (!x[i])
            {
                mu[i] = 0;
            }
            else
            {
                int temp = i;
                int cnt = 0;
                while (temp > 1)
                {
                    int p = y[temp];
                    cnt++;
                    temp /= p;
                }
                mu[i] = (cnt % 2 == 0) ? 1 : -1;
            }
        }
        return mu;
    }

    int countCoprime(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> mu = mobius(maxval);
        vector<vector<int>> divisibleCount(maxval + 1, vector<int>(m, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int val = mat[i][j];
                for (int d = 1; d * d <= val; d++)
                {
                    if (val % d == 0)
                    {
                        divisibleCount[d][i]++;
                        if (d != val / d)
                        {
                            divisibleCount[val / d][i]++;
                        }
                    }
                }
            }
        }
        long long ans = 0;
        for (int d = 1; d <= maxval; d++)
        {
            if (mu[d] == 0)
            {
                continue;
            }
            long long z = 1;
            bool y = true;
            for (int i = 0; i < m; i++)
            {
                if (divisibleCount[d][i] == 0)
                {
                    y = false;
                    break;
                }
                z = (z * divisibleCount[d][i]) % mod;
            }
            if (y)
            {
                if (mu[d] == 1)
                {
                    ans = (ans + z) % mod;
                }
                else
                {
                    ans = (ans - z + mod) % mod;
                }
            }
        }
        return ans;
    }
};