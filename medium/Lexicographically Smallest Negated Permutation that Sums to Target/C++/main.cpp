// Problem: Lexicographically Smallest Negated Permutation that Sums to Target
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-negated-permutation-that-sums-to-target/
class Solution
{
public:
    vector<int> lexSmallestNegatedPerm(int n, long long target)
    {
        long long sum = ((long long)(n) * (long long)(n + 1) / (long long)(2));
        long long diff = sum - target;
        if ((diff < 0) || (diff % 2 != 0))
        {
            return {};
        }
        long long need = (diff / 2);
        if (need > sum)
        {
            return {};
        }
        vector<bool> neg(n + 1, false);
        for (int i = n; i >= 1; --i)
        {
            if (need >= i)
            {
                need -= i;
                neg[i] = true;
            }
        }
        vector<int> ans;
        for (int i = n; i >= 1; --i)
        {
            if (neg[i])
            {
                ans.push_back(-i);
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            if (!neg[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};