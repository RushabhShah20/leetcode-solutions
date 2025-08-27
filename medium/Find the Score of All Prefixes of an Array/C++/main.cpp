// Problem: Find the Score of All Prefixes of an Array
// Link to the problem: https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/
class Solution
{
public:
    vector<long long> findPrefixScore(vector<int> &nums)
    {
        vector<long long> conver(nums.size()), prefix(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = max(prefix[i - 1], (long long)nums[i]);
        }
        conver[0] = nums[0] + prefix[0];
        for (int i = 0; i < nums.size(); i++)
        {
            conver[i] = nums[i] + prefix[i];
        }
        vector<long long> ans(nums.size());
        ans[0] = conver[0];
        for (int i = 1; i < nums.size(); i++)
        {
            ans[i] = ans[i - 1] + conver[i];
        }
        return ans;
    }
};