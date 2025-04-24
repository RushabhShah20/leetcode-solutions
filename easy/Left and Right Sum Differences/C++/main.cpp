// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> ans(nums.size()), left(nums.size()), right(nums.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            right[i] = sum;
            sum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = abs(left[i] - right[i]);
        }
        return ans;
    }
};