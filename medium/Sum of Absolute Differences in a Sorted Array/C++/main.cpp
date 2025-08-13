// Problem: Sum of Absolute Differences in a Sorted Array
// Link to the problem: https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/
class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        vector<int> suffix(nums.size(), 0);
        suffix[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = (nums[i] * i) - prefix[i] + (suffix[i] - (nums[i] * (nums.size() - i - 1)));
        }
        return ans;
    }
};