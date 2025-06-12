// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (abs(nums[i] - nums[i - 1]) > ans)
            {
                ans = abs(nums[i] - nums[i - 1]);
            }
        }
        if (abs(nums.back() - nums[0]) > ans)
        {
            ans = abs(nums.back() - nums[0]);
        }
        return ans;
    }
};