// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
class Solution
{
public:
    vector<int> constructTransformedArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                ans[i] = nums[(i + nums[i] % n + n) % n];
            }
            else
            {
                ans[i] = nums[i];
            }
        }
        return ans;
    }
};