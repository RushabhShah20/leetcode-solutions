// Problem: Longest Strictly Increasing Subsequence With Non-Zero Bitwise AND
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-subsequence-with-non-zero-bitwise-and/
class Solution
{
public:
    int longestAND(vector<int> &nums)
    {
        int ans = 0;
        for (int bit = 0; bit < 31; bit++)
        {
            vector<int> v;
            for (const int num : nums)
            {
                if (num & (1 << bit))
                {
                    auto it = lower_bound(v.begin(), v.end(), num);
                    if (it == v.end())
                    {
                        v.push_back(num);
                    }
                    else
                    {
                        *it = num;
                    }
                }
            }
            ans = max(ans, (int)v.size());
        }
        return ans;
    }
};