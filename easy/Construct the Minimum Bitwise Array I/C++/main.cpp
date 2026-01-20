// Problem: Construct the Minimum Bitwise Array I
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/
class Solution
{
public:
    vector<int> minBitwiseArray(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = nums[i] - (((nums[i] + 1) & (-nums[i] - 1)) / 2);
            }
        }
        return ans;
    }
};