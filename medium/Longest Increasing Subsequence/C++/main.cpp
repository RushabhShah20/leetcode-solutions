// Problem: Longest Increasing Subsequence
// Link to the problem: https://leetcode.com/problems/longest-increasing-subsequence/
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> v;
        for (const int &num : nums)
        {
            if (v.empty() || num > v.back())
            {
                v.push_back(num);
            }
            else
            {
                auto idx = lower_bound(v.begin(), v.end(), num);
                *idx = num;
            }
        }
        const int ans = v.size();
        return ans;
    }
};