// Problem: Product of Array Except Self
// Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> prefix(nums.size(), 1), suffix(nums.size(), 1), ans(nums.size(), 1);
        prefix[0] = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (prefix[i - 1] == 0)
            {
                prefix[i] = 0;
            }
            else
            {
                prefix[i] = prefix[i - 1] * nums[i - 1];
            }
        }
        suffix[nums.size() - 1] = 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (suffix[i + 1] == 0)
            {
                suffix[i] = 0;
            }
            else
            {
                suffix[i] = suffix[i + 1] * nums[i + 1];
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};