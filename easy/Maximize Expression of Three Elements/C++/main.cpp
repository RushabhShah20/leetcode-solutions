// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
class Solution
{
public:
    int maximizeExpressionOfThree(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n - 1] + nums[n - 2] - nums[0];
    }
};