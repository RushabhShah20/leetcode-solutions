// Problem: Minimum Operations to Make Array Elements Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-elements-zero/
class Solution
{
public:
    long long minOperations(vector<vector<int>> &queries)
    {
        vector<long long> powFour{1};
        while (powFour.back() <= 1000000000LL)
        {
            powFour.push_back(powFour.back() * 4);
        }
        vector<long long> prefix{0};
        for (int i = 0; i < (int)powFour.size() - 1; i++)
        {
            prefix.push_back(prefix.back() + (long long)(i + 1) * 3 * powFour[i]);
        }
        auto F = [&](long long n)
        {
            if (n <= 0)
            {
                return 0LL;
            }
            int k = upper_bound(powFour.begin(), powFour.end(), n) - powFour.begin() - 1;
            return prefix[k] + (long long)(k + 1) * (n - powFour[k] + 1);
        };
        long long ans = 0;
        for (vector<int> &q : queries)
        {
            int l = q[0], r = q[1];
            long long s = F(r) - F(l - 1);
            ans += (s + 1) / 2;
        }
        return ans;
    }
};